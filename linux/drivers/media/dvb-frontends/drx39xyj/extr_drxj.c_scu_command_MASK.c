
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxjscu_cmd {int parameter_len; int result_len; scalar_t__* result; int command; int * parameter; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct i2c_device_addr*,int ,scalar_t__*,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int ,int ) ;
 unsigned long VAR_14 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_device_addr *VAR_15, struct drxjscu_cmd *VAR_16)
{
 int VAR_17;
 u16 VAR_18 = 0;
 unsigned long VAR_19;


 if (VAR_16 == ((void*)0))
  return -VAR_2;


 VAR_17 = FUNC_0(VAR_15, VAR_4, &VAR_18, 0);
 if (VAR_17 != 0) {
  FUNC_3("error %d\n", VAR_17);
  goto rw_error;
 }
 if (VAR_18 != VAR_1)
  return -VAR_3;

 switch (VAR_16->parameter_len) {
 case 5:
  VAR_17 = FUNC_1(VAR_15, VAR_13, *(VAR_16->parameter + 4), 0);
  if (VAR_17 != 0) {
   FUNC_3("error %d\n", VAR_17);
   goto rw_error;
  }
 case 4:
  VAR_17 = FUNC_1(VAR_15, VAR_12, *(VAR_16->parameter + 3), 0);
  if (VAR_17 != 0) {
   FUNC_3("error %d\n", VAR_17);
   goto rw_error;
  }
 case 3:
  VAR_17 = FUNC_1(VAR_15, VAR_11, *(VAR_16->parameter + 2), 0);
  if (VAR_17 != 0) {
   FUNC_3("error %d\n", VAR_17);
   goto rw_error;
  }
 case 2:
  VAR_17 = FUNC_1(VAR_15, VAR_10, *(VAR_16->parameter + 1), 0);
  if (VAR_17 != 0) {
   FUNC_3("error %d\n", VAR_17);
   goto rw_error;
  }
 case 1:
  VAR_17 = FUNC_1(VAR_15, VAR_9, *(VAR_16->parameter + 0), 0);
  if (VAR_17 != 0) {
   FUNC_3("error %d\n", VAR_17);
   goto rw_error;
  }
 case 0:

  break;
 default:

  return -VAR_3;
 }
 VAR_17 = FUNC_1(VAR_15, VAR_4, VAR_16->command, 0);
 if (VAR_17 != 0) {
  FUNC_3("error %d\n", VAR_17);
  goto rw_error;
 }


 VAR_19 = VAR_14 + FUNC_2(VAR_0);
 while (FUNC_4(VAR_19)) {
  VAR_17 = FUNC_0(VAR_15, VAR_4, &VAR_18, 0);
  if (VAR_17 != 0) {
   FUNC_3("error %d\n", VAR_17);
   goto rw_error;
  }
  if (VAR_18 == VAR_1)
   break;
  FUNC_5(1000, 2000);
 }

 if (VAR_18 != VAR_1)
  return -VAR_3;


 if ((VAR_16->result_len > 0) && (VAR_16->result != ((void*)0))) {
  s16 VAR_20;

  switch (VAR_16->result_len) {
  case 4:
   VAR_17 = FUNC_0(VAR_15, VAR_12, VAR_16->result + 3, 0);
   if (VAR_17 != 0) {
    FUNC_3("error %d\n", VAR_17);
    goto rw_error;
   }
  case 3:
   VAR_17 = FUNC_0(VAR_15, VAR_11, VAR_16->result + 2, 0);
   if (VAR_17 != 0) {
    FUNC_3("error %d\n", VAR_17);
    goto rw_error;
   }
  case 2:
   VAR_17 = FUNC_0(VAR_15, VAR_10, VAR_16->result + 1, 0);
   if (VAR_17 != 0) {
    FUNC_3("error %d\n", VAR_17);
    goto rw_error;
   }
  case 1:
   VAR_17 = FUNC_0(VAR_15, VAR_9, VAR_16->result + 0, 0);
   if (VAR_17 != 0) {
    FUNC_3("error %d\n", VAR_17);
    goto rw_error;
   }
  case 0:

   break;
  default:

   return -VAR_3;
  }


  VAR_20 = VAR_16->result[0];


  if ((VAR_20 == (s16) VAR_8)
      || (VAR_20 == (s16) VAR_7)
      || (VAR_20 == (s16) VAR_5)
      || (VAR_20 == (s16) VAR_6)
      ) {
   return -VAR_2;
  }

  else if (VAR_20 < 0)
   return -VAR_3;
  else
   return 0;
 }

 return 0;

rw_error:
 return VAR_17;
}

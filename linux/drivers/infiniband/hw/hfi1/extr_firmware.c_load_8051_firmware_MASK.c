
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned long long u64 ;
struct hfi1_devdata {int dc8051_ver; } ;
struct firmware_details {int signature; int firmware_len; int firmware_ptr; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct hfi1_devdata*,char*,int,int,int) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (struct hfi1_devdata*,struct firmware_details*) ;
 int FUNC_5 (struct hfi1_devdata*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_7 (struct hfi1_devdata*,int ) ;
 int FUNC_8 (struct hfi1_devdata*,int,int ,int ,int ) ;
 int FUNC_9 (struct hfi1_devdata*,int ,unsigned long long) ;
 int FUNC_10 (struct hfi1_devdata*,int ) ;

__attribute__((used)) static int FUNC_11(struct hfi1_devdata *VAR_13,
         struct firmware_details *VAR_14)
{
 u64 VAR_15;
 int VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 VAR_15 = VAR_4
  | VAR_1
  | VAR_2
  | VAR_3
  | VAR_5;
 FUNC_9(VAR_13, VAR_0, VAR_15);
 VAR_15 = VAR_4;
 FUNC_9(VAR_13, VAR_0, VAR_15);


 FUNC_4(VAR_13, VAR_14);




 FUNC_9(VAR_13, VAR_10, 0);


 VAR_16 = FUNC_8(VAR_13, 1 , 0, VAR_14->firmware_ptr,
    VAR_14->firmware_len);
 if (VAR_16)
  return VAR_16;







 FUNC_9(VAR_13, VAR_10, VAR_11);


 VAR_16 = FUNC_6(VAR_13, "8051", VAR_14->signature);
 if (VAR_16)
  return VAR_16;


 FUNC_9(VAR_13, VAR_0, 0ull);





 VAR_16 = FUNC_7(VAR_13, VAR_12);
 if (VAR_16) {
  FUNC_1(VAR_13, "8051 start timeout, current state 0x%x\n",
      FUNC_3(VAR_13));
  return -VAR_7;
 }

 FUNC_5(VAR_13, &VAR_17, &VAR_18, &VAR_19);
 FUNC_2(VAR_13, "8051 firmware version %d.%d.%d\n",
      (int)VAR_17, (int)VAR_18, (int)VAR_19);
 VAR_13->dc8051_ver = FUNC_0(VAR_17, VAR_18, VAR_19);
 VAR_16 = FUNC_10(VAR_13, VAR_9);
 if (VAR_16 != VAR_8) {
  FUNC_1(VAR_13,
      "Failed to set host interface version, return 0x%x\n",
      VAR_16);
  return -VAR_6;
 }

 return 0;
}

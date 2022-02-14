
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cros_ec_sensors_core_state {struct cros_ec_device* ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cros_ec_device*,int ,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
     struct cros_ec_sensors_core_state *VAR_3)
{
 struct cros_ec_device *VAR_4 = VAR_3->ec;
 u8 VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 while (VAR_5 & VAR_1) {

  if (VAR_7++ >= 50)
   return -VAR_2;


  if (VAR_7 % 5 == 0)
   FUNC_1(25);

  VAR_6 = FUNC_0(VAR_4, VAR_0,
        &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return VAR_5;
}

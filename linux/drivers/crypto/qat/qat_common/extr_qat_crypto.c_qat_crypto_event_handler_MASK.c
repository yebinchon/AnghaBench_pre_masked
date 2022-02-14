
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_accel_dev {int dummy; } ;
typedef enum adf_event { ____Placeholder_adf_event } adf_event ;
 int FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (struct adf_accel_dev*) ;

__attribute__((used)) static int FUNC_2(struct adf_accel_dev *VAR_0,
        enum adf_event VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 133:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 130:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 131:
 case 132:
 case 129:
 case 128:
 default:
  VAR_2 = 0;
 }
 return VAR_2;
}

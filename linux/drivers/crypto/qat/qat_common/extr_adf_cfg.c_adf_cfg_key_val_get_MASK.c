
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_cfg_section {int dummy; } ;
struct adf_cfg_key_val {int val; } ;
struct adf_accel_dev {int dummy; } ;


 int VAR_0 ;
 struct adf_cfg_key_val* FUNC_0 (struct adf_cfg_section*,char const*) ;
 struct adf_cfg_section* FUNC_1 (struct adf_accel_dev*,char const*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct adf_accel_dev *VAR_1,
          const char *VAR_2,
          const char *VAR_3,
          char *VAR_4)
{
 struct adf_cfg_section *VAR_5 = FUNC_1(VAR_1, VAR_2);
 struct adf_cfg_key_val *VAR_6 = ((void*)0);

 if (VAR_5)
  VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_4, VAR_6->val, VAR_0);
  return 0;
 }
 return -1;
}

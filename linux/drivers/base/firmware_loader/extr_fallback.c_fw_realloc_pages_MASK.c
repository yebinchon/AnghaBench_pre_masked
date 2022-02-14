
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_sysfs {int fw_priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fw_sysfs*) ;

__attribute__((used)) static int FUNC_3(struct fw_sysfs *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->fw_priv,
    FUNC_0(VAR_2) >> VAR_0);
 if (VAR_3)
  FUNC_2(VAR_1);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_fabric_configfs {int dummy; } ;
struct se_wwn {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct se_wwn* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static struct se_wwn *FUNC_2(struct target_fabric_configfs *VAR_1,
          struct config_group *VAR_2,
          const char *VAR_3)
{
 return FUNC_1(VAR_3) ? : FUNC_0(-VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct config_group {int dummy; } ;
struct acpi_table {struct config_item cfg; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct acpi_table* FUNC_2 (int,int ) ;

__attribute__((used)) static struct config_item *FUNC_3(struct config_group *VAR_3,
      const char *VAR_4)
{
 struct acpi_table *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->cfg, VAR_4, &VAR_2);
 return &VAR_5->cfg;
}

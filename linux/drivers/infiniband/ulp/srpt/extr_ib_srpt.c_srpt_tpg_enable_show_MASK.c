
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_port {int enabled; } ;
struct se_portal_group {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct srpt_port* FUNC_1 (struct se_portal_group*) ;
 struct se_portal_group* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1, char *VAR_2)
{
 struct se_portal_group *VAR_3 = FUNC_2(VAR_1);
 struct srpt_port *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_2, VAR_0, "%d\n", VAR_4->enabled);
}

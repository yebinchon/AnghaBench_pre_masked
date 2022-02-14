
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_port {int enabled; } ;
struct se_portal_group {int dummy; } ;


 int FUNC_0 (struct se_portal_group*) ;
 struct srpt_port* FUNC_1 (struct se_portal_group*) ;

__attribute__((used)) static void FUNC_2(struct se_portal_group *VAR_0)
{
 struct srpt_port *VAR_1 = FUNC_1(VAR_0);

 VAR_1->enabled = 0;
 FUNC_0(VAR_0);
}

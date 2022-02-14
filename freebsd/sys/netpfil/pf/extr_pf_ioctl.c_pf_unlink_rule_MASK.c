
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rulequeue {int dummy; } ;
struct pf_rule {int rule_flag; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct pf_rule*,int ) ;
 int FUNC_4 (struct pf_rulequeue*,struct pf_rule*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct pf_rulequeue *VAR_3, struct pf_rule *VAR_4)
{

 FUNC_0();

 FUNC_4(VAR_3, VAR_4, VAR_2);

 FUNC_1();
 VAR_4->rule_flag |= VAR_0;
 FUNC_3(&VAR_1, VAR_4, VAR_2);
 FUNC_2();
}

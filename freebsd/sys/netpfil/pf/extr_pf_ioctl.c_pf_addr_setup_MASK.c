
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pf_ruleset {int dummy; } ;
struct TYPE_4__ {int * tbl; } ;
struct TYPE_3__ {int tblname; } ;
struct pf_addr_wrap {int type; TYPE_2__ p; TYPE_1__ v; } ;
typedef int sa_family_t ;


 int VAR_0 ;


 int FUNC_0 (struct pf_addr_wrap*,int ) ;
 int * FUNC_1 (struct pf_ruleset*,int ) ;

__attribute__((used)) static int
FUNC_2(struct pf_ruleset *VAR_1, struct pf_addr_wrap *VAR_2,
    sa_family_t VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2->type) {
 case 128:
  VAR_2->p.tbl = FUNC_1(VAR_1, VAR_2->v.tblname);
  if (VAR_2->p.tbl == ((void*)0))
   VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  break;
 }

 return (VAR_4);
}

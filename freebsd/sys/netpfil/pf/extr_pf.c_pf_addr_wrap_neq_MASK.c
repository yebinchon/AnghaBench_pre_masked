
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tbl; TYPE_3__* dyn; } ;
struct TYPE_5__ {int mask; int addr; } ;
struct TYPE_6__ {TYPE_1__ a; } ;
struct pf_addr_wrap {int type; TYPE_4__ p; TYPE_2__ v; } ;
struct TYPE_7__ {int pfid_kt; } ;


 int VAR_0 ;






 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct pf_addr_wrap *VAR_1, struct pf_addr_wrap *VAR_2)
{
 if (VAR_1->type != VAR_2->type)
  return (1);
 switch (VAR_1->type) {
 case 133:
 case 130:
  if (FUNC_0(&VAR_1->v.a.addr, &VAR_2->v.a.addr, VAR_0))
   return (1);
  if (FUNC_0(&VAR_1->v.a.mask, &VAR_2->v.a.mask, VAR_0))
   return (1);
  return (0);
 case 132:
  return (VAR_1->p.dyn->pfid_kt != VAR_2->p.dyn->pfid_kt);
 case 131:
 case 128:
  return (0);
 case 129:
  return (VAR_1->p.tbl != VAR_2->p.tbl);
 default:
  FUNC_1("invalid address type: %d\n", VAR_1->type);
  return (1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tbl; int dyn; } ;
struct TYPE_4__ {int type; TYPE_1__ p; } ;
struct pf_pooladdr {scalar_t__ kif; TYPE_2__ addr; } ;
struct pf_palist {int dummy; } ;


 int VAR_0 ;


 struct pf_pooladdr* FUNC_0 (struct pf_palist*) ;
 int FUNC_1 (struct pf_palist*,struct pf_pooladdr*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct pf_pooladdr*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct pf_palist *VAR_2)
{
 struct pf_pooladdr *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  switch (VAR_3->addr.type) {
  case 129:
   FUNC_3(VAR_3->addr.p.dyn);
   break;
  case 128:

   if (VAR_3->addr.p.tbl != ((void*)0))
    FUNC_5(VAR_3->addr.p.tbl);
   break;
  }
  if (VAR_3->kif)
   FUNC_4(VAR_3->kif);
  FUNC_1(VAR_2, VAR_3, VAR_1);
  FUNC_2(VAR_3, VAR_0);
 }
}

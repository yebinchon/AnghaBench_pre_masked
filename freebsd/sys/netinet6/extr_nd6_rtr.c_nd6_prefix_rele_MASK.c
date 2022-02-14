
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_prefix {int ndpr_advrtrs; int ndpr_refcnt; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct nd_prefix*,int ) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(struct nd_prefix *VAR_1)
{

 if (FUNC_3(&VAR_1->ndpr_refcnt)) {
  FUNC_0(FUNC_1(&VAR_1->ndpr_advrtrs),
      ("prefix %p has advertising routers", VAR_1));
  FUNC_2(VAR_1, VAR_0);
 }
}

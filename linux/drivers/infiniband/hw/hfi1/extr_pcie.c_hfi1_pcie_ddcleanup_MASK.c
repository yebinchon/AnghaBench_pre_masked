
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int * piobase; int * rcvarray_wc; int * kregbase2; int * kregbase1; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct hfi1_devdata *VAR_1)
{
 VAR_1->flags &= ~VAR_0;
 if (VAR_1->kregbase1)
  FUNC_0(VAR_1->kregbase1);
 VAR_1->kregbase1 = ((void*)0);
 if (VAR_1->kregbase2)
  FUNC_0(VAR_1->kregbase2);
 VAR_1->kregbase2 = ((void*)0);
 if (VAR_1->rcvarray_wc)
  FUNC_0(VAR_1->rcvarray_wc);
 VAR_1->rcvarray_wc = ((void*)0);
 if (VAR_1->piobase)
  FUNC_0(VAR_1->piobase);
 VAR_1->piobase = ((void*)0);
}

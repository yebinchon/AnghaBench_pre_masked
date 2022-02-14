
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * su_tail_data; int * rr_relocated; int rr_real_parent; int * isoExtAttributes; int * isoDirRecord; int * node; int * ptlast; int ptprev; int ptnext; int * dot_dot_record; int dot_record; int parent; int cn_children; } ;
typedef TYPE_1__ cd9660node ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;

__attribute__((used)) static cd9660node *
FUNC_2(void)
{
 cd9660node *VAR_0 = FUNC_1(1, sizeof(*VAR_0));

 FUNC_0(&VAR_0->cn_children);
 VAR_0->parent = VAR_0->dot_record = *(VAR_0->dot_dot_record = ((void*)0));
 VAR_0->ptnext = VAR_0->ptprev = *(VAR_0->ptlast = ((void*)0));
 VAR_0->node = ((void*)0);
 VAR_0->isoDirRecord = ((void*)0);
 VAR_0->isoExtAttributes = ((void*)0);
 VAR_0->rr_real_parent = *(VAR_0->rr_relocated = ((void*)0));
 VAR_0->su_tail_data = ((void*)0);
 return VAR_0;
}

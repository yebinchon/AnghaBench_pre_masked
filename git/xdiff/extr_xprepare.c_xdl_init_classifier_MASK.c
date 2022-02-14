
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long flags; int hbits; int hsize; long alloc; scalar_t__ count; int ncha; int ** rchash; int ** rcrecs; } ;
typedef TYPE_1__ xdlclassifier_t ;
typedef int xdlclass_t ;


 int FUNC_0 (int **,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,long) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(xdlclassifier_t *VAR_0, long VAR_1, long VAR_2) {
 VAR_0->flags = VAR_2;

 VAR_0->hbits = FUNC_4((unsigned int) VAR_1);
 VAR_0->hsize = 1 << VAR_0->hbits;

 if (FUNC_2(&VAR_0->ncha, sizeof(xdlclass_t), VAR_1 / 4 + 1) < 0) {

  return -1;
 }
 if (!(VAR_0->rchash = (xdlclass_t **) FUNC_5(VAR_0->hsize * sizeof(xdlclass_t *)))) {

  FUNC_1(&VAR_0->ncha);
  return -1;
 }
 FUNC_0(VAR_0->rchash, 0, VAR_0->hsize * sizeof(xdlclass_t *));

 VAR_0->alloc = VAR_1;
 if (!(VAR_0->rcrecs = (xdlclass_t **) FUNC_5(VAR_0->alloc * sizeof(xdlclass_t *)))) {

  FUNC_3(VAR_0->rchash);
  FUNC_1(&VAR_0->ncha);
  return -1;
 }

 VAR_0->count = 0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int flags; } ;
typedef TYPE_1__ xpparam_t ;
struct TYPE_22__ {TYPE_1__ xpp; } ;
typedef TYPE_2__ xmparam_t ;
struct TYPE_23__ {int xdf1; int xdf2; } ;
typedef TYPE_3__ xdfenv_t ;
typedef int xdchange_t ;
struct TYPE_24__ {scalar_t__ size; int ptr; } ;
typedef TYPE_4__ mmfile_t ;
struct TYPE_25__ {scalar_t__ size; int * ptr; } ;
typedef TYPE_5__ mmbuffer_t ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int **) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_4__*,TYPE_1__ const*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,TYPE_3__*,int *,TYPE_2__ const*,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (scalar_t__) ;

int FUNC_8(mmfile_t *VAR_0, mmfile_t *VAR_1, mmfile_t *VAR_2,
  xmparam_t const *VAR_3, mmbuffer_t *VAR_4)
{
 xdchange_t *VAR_5, *VAR_6;
 xdfenv_t VAR_7, VAR_8;
 int VAR_9;
 xpparam_t const *VAR_10 = &VAR_3->xpp;

 VAR_4->ptr = ((void*)0);
 VAR_4->size = 0;

 if (FUNC_3(VAR_0, VAR_1, VAR_10, &VAR_7) < 0) {
  return -1;
 }
 if (FUNC_3(VAR_0, VAR_2, VAR_10, &VAR_8) < 0) {
  FUNC_5(&VAR_7);
  return -1;
 }
 if (FUNC_2(&VAR_7, &VAR_7, VAR_10->flags) < 0 ||
     FUNC_2(&VAR_7, &VAR_7, VAR_10->flags) < 0 ||
     FUNC_1(&VAR_7, &VAR_5) < 0) {
  FUNC_5(&VAR_7);
  return -1;
 }
 if (FUNC_2(&VAR_8, &VAR_8, VAR_10->flags) < 0 ||
     FUNC_2(&VAR_8, &VAR_8, VAR_10->flags) < 0 ||
     FUNC_1(&VAR_8, &VAR_6) < 0) {
  FUNC_6(VAR_5);
  FUNC_5(&VAR_7);
  FUNC_5(&VAR_8);
  return -1;
 }
 VAR_9 = 0;
 if (!VAR_5) {
  VAR_4->ptr = FUNC_7(VAR_2->size);
  FUNC_0(VAR_4->ptr, VAR_2->ptr, VAR_2->size);
  VAR_4->size = VAR_2->size;
 } else if (!VAR_6) {
  VAR_4->ptr = FUNC_7(VAR_1->size);
  FUNC_0(VAR_4->ptr, VAR_1->ptr, VAR_1->size);
  VAR_4->size = VAR_1->size;
 } else {
  VAR_9 = FUNC_4(&VAR_7, VAR_5,
          &VAR_8, VAR_6,
          VAR_3, VAR_4);
 }
 FUNC_6(VAR_5);
 FUNC_6(VAR_6);

 FUNC_5(&VAR_7);
 FUNC_5(&VAR_8);

 return VAR_9;
}

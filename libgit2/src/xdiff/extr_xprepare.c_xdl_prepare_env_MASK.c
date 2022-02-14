
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xdlclassifier_t ;
struct TYPE_7__ {int xdf1; int xdf2; } ;
typedef TYPE_2__ xdfenv_t ;
typedef int mmfile_t ;
typedef int cf ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,long) ;
 scalar_t__ FUNC_5 (int *,long,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int,int *,long,TYPE_1__ const*,int *,int *) ;

int FUNC_8(mmfile_t *VAR_4, mmfile_t *VAR_5, xpparam_t const *VAR_6,
      xdfenv_t *VAR_7) {
 long VAR_8, VAR_9, VAR_10;
 xdlclassifier_t VAR_11;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_10 = (FUNC_0(VAR_6->flags) == VAR_0
    ? VAR_3 : VAR_2);

 VAR_8 = FUNC_4(VAR_4, VAR_10) + 1;
 VAR_9 = FUNC_4(VAR_5, VAR_10) + 1;

 if (FUNC_0(VAR_6->flags) != VAR_0 &&
     FUNC_5(&VAR_11, VAR_8 + VAR_9 + 1, VAR_6->flags) < 0)
  return -1;

 if (FUNC_7(1, VAR_4, VAR_8, VAR_6, &VAR_11, &VAR_7->xdf1) < 0) {

  FUNC_2(&VAR_11);
  return -1;
 }
 if (FUNC_7(2, VAR_5, VAR_9, VAR_6, &VAR_11, &VAR_7->xdf2) < 0) {

  FUNC_3(&VAR_7->xdf1);
  FUNC_2(&VAR_11);
  return -1;
 }

 if ((FUNC_0(VAR_6->flags) != VAR_1) &&
     (FUNC_0(VAR_6->flags) != VAR_0) &&
     FUNC_6(&VAR_11, &VAR_7->xdf1, &VAR_7->xdf2) < 0) {

  FUNC_3(&VAR_7->xdf2);
  FUNC_3(&VAR_7->xdf1);
  FUNC_2(&VAR_11);
  return -1;
 }

 if (FUNC_0(VAR_6->flags) != VAR_0)
  FUNC_2(&VAR_11);

 return 0;
}

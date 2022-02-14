
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int flags; } ;
typedef TYPE_1__ xpparam_t ;
struct TYPE_18__ {int xdf1; int xdf2; } ;
typedef TYPE_2__ xdfenv_t ;
struct TYPE_19__ {scalar_t__ hunk_func; } ;
typedef TYPE_3__ xdemitconf_t ;
typedef int xdemitcb_t ;
typedef int xdchange_t ;
typedef int mmfile_t ;
typedef scalar_t__ (* emit_func_t ) (TYPE_2__*,int *,int *,TYPE_3__ const*) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int **) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,TYPE_3__ const*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_1__ const*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int *,TYPE_3__ const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*,int) ;

int FUNC_8(mmfile_t *VAR_1, mmfile_t *VAR_2, xpparam_t const *VAR_3,
      xdemitconf_t const *VAR_4, xdemitcb_t *VAR_5) {
 xdchange_t *VAR_6;
 xdfenv_t VAR_7;
 emit_func_t VAR_8 = VAR_4->hunk_func ? FUNC_1 : FUNC_4;

 if (FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_7) < 0) {

  return -1;
 }
 if (FUNC_2(&VAR_7.xdf1, &VAR_7.xdf2, VAR_3->flags) < 0 ||
     FUNC_2(&VAR_7.xdf2, &VAR_7.xdf1, VAR_3->flags) < 0 ||
     FUNC_0(&VAR_7, &VAR_6) < 0) {

  FUNC_5(&VAR_7);
  return -1;
 }
 if (VAR_6) {
  if (VAR_3->flags & VAR_0)
   FUNC_7(VAR_6, &VAR_7, VAR_3->flags);

  if (VAR_8(&VAR_7, VAR_6, VAR_5, VAR_4) < 0) {

   FUNC_6(VAR_6);
   FUNC_5(&VAR_7);
   return -1;
  }
  FUNC_6(VAR_6);
 }
 FUNC_5(&VAR_7);

 return 0;
}

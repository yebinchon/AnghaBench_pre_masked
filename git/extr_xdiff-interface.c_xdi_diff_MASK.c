
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xpparam_t ;
struct TYPE_11__ {int flags; int ctxlen; } ;
typedef TYPE_1__ xdemitconf_t ;
typedef int xdemitcb_t ;
struct TYPE_12__ {scalar_t__ size; } ;
typedef TYPE_2__ mmfile_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int const*,TYPE_1__ const*,int *) ;

int FUNC_2(mmfile_t *VAR_2, mmfile_t *VAR_3, xpparam_t const *VAR_4, xdemitconf_t const *VAR_5, xdemitcb_t *VAR_6)
{
 mmfile_t VAR_7 = *VAR_2;
 mmfile_t VAR_8 = *VAR_3;

 if (VAR_2->size > VAR_0 || VAR_3->size > VAR_0)
  return -1;

 if (!VAR_5->ctxlen && !(VAR_5->flags & VAR_1))
  FUNC_0(&VAR_7, &VAR_8);

 return FUNC_1(&VAR_7, &VAR_8, VAR_4, VAR_5, VAR_6);
}

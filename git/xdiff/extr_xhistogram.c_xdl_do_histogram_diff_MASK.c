
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xpparam_t ;
struct TYPE_7__ {scalar_t__ dstart; scalar_t__ dend; } ;
struct TYPE_8__ {scalar_t__ dstart; scalar_t__ dend; } ;
struct TYPE_9__ {TYPE_1__ xdf2; TYPE_2__ xdf1; } ;
typedef TYPE_3__ xdfenv_t ;
typedef int mmfile_t ;


 int FUNC_0 (int const*,TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int const*,TYPE_3__*) ;

int FUNC_2(mmfile_t *VAR_0, mmfile_t *VAR_1,
 xpparam_t const *VAR_2, xdfenv_t *VAR_3)
{
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3) < 0)
  return -1;

 return FUNC_0(VAR_2, VAR_3,
  VAR_3->xdf1.dstart + 1, VAR_3->xdf1.dend - VAR_3->xdf1.dstart + 1,
  VAR_3->xdf2.dstart + 1, VAR_3->xdf2.dend - VAR_3->xdf2.dstart + 1);
}

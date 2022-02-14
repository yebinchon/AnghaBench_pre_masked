
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct collect_diff_cbdata* priv; int hunk_func; scalar_t__ interhunkctxlen; scalar_t__ ctxlen; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef TYPE_1__ xdemitconf_t ;
typedef TYPE_1__ xdemitcb_t ;
struct diff_ranges {int dummy; } ;
struct collect_diff_cbdata {struct diff_ranges* diff; int * member_0; } ;
typedef int mmfile_t ;
typedef int ecb ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(mmfile_t *VAR_1, mmfile_t *VAR_2, struct diff_ranges *VAR_3)
{
 struct collect_diff_cbdata VAR_4 = {((void*)0)};
 xpparam_t VAR_5;
 xdemitconf_t VAR_6;
 xdemitcb_t VAR_7;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ctxlen = VAR_6.interhunkctxlen = 0;

 VAR_4.diff = VAR_3;
 VAR_6.hunk_func = VAR_0;
 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.priv = &VAR_4;
 return FUNC_1(VAR_1, VAR_2, &VAR_5, &VAR_6, &VAR_7);
}

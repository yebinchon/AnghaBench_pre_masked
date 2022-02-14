
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int interhunkctxlen; int ctxlen; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef TYPE_1__ xdemitconf_t ;
struct diffgrep_cb {int hit; int * regexp; } ;
struct diff_options {int interhunkcontext; int context; } ;
typedef int regmatch_t ;
typedef int regex_t ;
struct TYPE_12__ {int size; int ptr; } ;
typedef TYPE_3__ mmfile_t ;
typedef int kwset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int ,int ,int,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*,int ,int ,struct diffgrep_cb*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(mmfile_t *VAR_2, mmfile_t *VAR_3,
       struct diff_options *VAR_4,
       regex_t *VAR_5, kwset_t VAR_6)
{
 regmatch_t VAR_7;
 struct diffgrep_cb VAR_8;
 xpparam_t VAR_9;
 xdemitconf_t VAR_10;

 if (!VAR_2)
  return !FUNC_1(VAR_5, VAR_3->ptr, VAR_3->size,
        1, &VAR_7, 0);
 if (!VAR_3)
  return !FUNC_1(VAR_5, VAR_2->ptr, VAR_2->size,
        1, &VAR_7, 0);





 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_8.regexp = VAR_5;
 VAR_8.hit = 0;
 VAR_10.ctxlen = VAR_4->context;
 VAR_10.interhunkctxlen = VAR_4->interhunkcontext;
 if (FUNC_2(VAR_2, VAR_3, VAR_1, VAR_0,
     &VAR_8, &VAR_9, &VAR_10))
  return 0;
 return VAR_8.hit;
}

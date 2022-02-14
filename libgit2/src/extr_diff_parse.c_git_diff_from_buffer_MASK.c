
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int deltas; } ;
struct TYPE_15__ {scalar_t__ remain_len; } ;
struct TYPE_16__ {TYPE_5__ base; int patches; TYPE_1__ parse_ctx; } ;
typedef TYPE_2__ git_patch_parse_ctx ;
struct TYPE_17__ {struct TYPE_17__* delta; } ;
typedef TYPE_3__ git_patch ;
typedef TYPE_2__ git_diff_parsed ;
typedef TYPE_5__ git_diff ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__**,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (char const*,size_t,int *) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9(
 git_diff **VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 git_diff_parsed *VAR_4;
 git_patch *VAR_5;
 git_patch_parse_ctx *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 *VAR_1 = ((void*)0);

 VAR_4 = FUNC_1();
 FUNC_0(VAR_4);

 VAR_6 = FUNC_6(VAR_2, VAR_3, ((void*)0));
 FUNC_0(VAR_6);

 while (VAR_6->parse_ctx.remain_len) {
  if ((VAR_7 = FUNC_4(&VAR_5, VAR_6)) < 0)
   break;

  FUNC_7(&VAR_4->patches, VAR_5);
  FUNC_7(&VAR_4->base.deltas, VAR_5->delta);
 }

 if (VAR_7 == VAR_0 && FUNC_8(&VAR_4->patches) > 0) {
  FUNC_3();
  VAR_7 = 0;
 }

 FUNC_5(VAR_6);

 if (VAR_7 < 0)
  FUNC_2(&VAR_4->base);
 else
  *VAR_1 = &VAR_4->base;

 return VAR_7;
}

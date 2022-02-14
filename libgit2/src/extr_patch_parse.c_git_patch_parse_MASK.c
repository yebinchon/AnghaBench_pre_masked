
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int flags; int new_prefix; int old_prefix; } ;
struct TYPE_16__ {size_t remain_len; size_t remain; } ;
struct TYPE_19__ {TYPE_2__ diff_opts; TYPE_1__ parse_ctx; TYPE_3__* delta; int (* free_fn ) (TYPE_4__*) ;} ;
struct TYPE_18__ {int nfiles; TYPE_4__ base; int new_prefix; int old_prefix; int status; TYPE_4__* ctx; } ;
typedef TYPE_3__ git_patch_parsed ;
typedef TYPE_4__ git_patch_parse_ctx ;
typedef TYPE_4__ git_patch ;
typedef int git_diff_delta ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

int FUNC_8(
 git_patch **VAR_2,
 git_patch_parse_ctx *VAR_3)
{
 git_patch_parsed *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7 = 0;

 FUNC_2(VAR_2 && VAR_3);

 *VAR_2 = ((void*)0);

 VAR_4 = FUNC_4(1, sizeof(git_patch_parsed));
 FUNC_0(VAR_4);

 VAR_4->ctx = VAR_3;
 FUNC_1(VAR_4->ctx);

 VAR_4->base.free_fn = FUNC_7;

 VAR_4->base.delta = FUNC_4(1, sizeof(git_diff_delta));
 FUNC_0(VAR_4->base.delta);

 VAR_4->base.delta->status = VAR_0;
 VAR_4->base.delta->nfiles = 2;

 VAR_5 = VAR_3->parse_ctx.remain_len;

 if ((VAR_7 = FUNC_6(VAR_4, VAR_3)) < 0 ||
  (VAR_7 = FUNC_5(VAR_4, VAR_3)) < 0 ||
  (VAR_7 = FUNC_3(VAR_4)) < 0)
  goto done;

 VAR_6 = VAR_5 - VAR_3->parse_ctx.remain_len;
 VAR_3->parse_ctx.remain += VAR_6;

 VAR_4->base.diff_opts.old_prefix = VAR_4->old_prefix;
 VAR_4->base.diff_opts.new_prefix = VAR_4->new_prefix;
 VAR_4->base.diff_opts.flags |= VAR_1;

 FUNC_1(&VAR_4->base);
 *VAR_2 = &VAR_4->base;

done:
 if (VAR_7 < 0)
  FUNC_7(&VAR_4->base);

 return VAR_7;
}

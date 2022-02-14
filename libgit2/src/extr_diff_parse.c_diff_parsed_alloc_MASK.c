
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {int deltas; int pool; TYPE_2__ opts; int free_fn; int patch_fn; int entrycomp; int pfxcomp; int strncomp; int strcomp; int type; } ;
struct TYPE_8__ {TYPE_3__ base; int patches; } ;
typedef TYPE_1__ git_diff_parsed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int VAR_9 ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static git_diff_parsed *FUNC_8(void)
{
 git_diff_parsed *VAR_10;

 if ((VAR_10 = FUNC_1(1, sizeof(git_diff_parsed))) == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_10->base);
 VAR_10->base.type = VAR_2;
 VAR_10->base.strcomp = VAR_5;
 VAR_10->base.strncomp = VAR_6;
 VAR_10->base.pfxcomp = VAR_4;
 VAR_10->base.entrycomp = VAR_7;
 VAR_10->base.patch_fn = VAR_9;
 VAR_10->base.free_fn = VAR_3;

 if (FUNC_4(&VAR_10->base.opts, VAR_1) < 0) {
  FUNC_2(VAR_10);
  return ((void*)0);
 }

 VAR_10->base.opts.flags &= ~VAR_0;

 FUNC_5(&VAR_10->base.pool, 1);

 if (FUNC_6(&VAR_10->patches, 0, ((void*)0)) < 0 ||
  FUNC_6(&VAR_10->base.deltas, 0, VAR_8) < 0) {
  FUNC_3(&VAR_10->base);
  return ((void*)0);
 }

 FUNC_7(&VAR_10->base.deltas, VAR_8);

 return VAR_10;
}

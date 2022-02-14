
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_32__ {scalar_t__ stat_calls; } ;
typedef TYPE_2__ git_iterator ;
struct TYPE_33__ {int (* progress_cb ) (TYPE_5__*,int *,int *,int ) ;int payload; } ;
typedef TYPE_3__ git_diff_options ;
struct TYPE_31__ {int stat_calls; } ;
struct TYPE_35__ {int (* entrycomp ) (TYPE_7__*,TYPE_7__*) ;TYPE_1__ perf; } ;
struct TYPE_34__ {TYPE_5__ base; } ;
typedef TYPE_4__ git_diff_generated ;
typedef TYPE_5__ git_diff ;
struct TYPE_36__ {TYPE_7__* nitem; TYPE_7__* oitem; TYPE_2__* new_iter; TYPE_2__* old_iter; int * repo; } ;
typedef TYPE_6__ diff_in_progress ;
struct TYPE_37__ {int * path; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__ const*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_7__**,TYPE_2__*) ;
 int FUNC_10 (TYPE_5__*,int *,int *,int ) ;
 int FUNC_11 (TYPE_7__*,TYPE_7__*) ;

int FUNC_12(
 git_diff **VAR_1,
 git_repository *VAR_2,
 git_iterator *VAR_3,
 git_iterator *VAR_4,
 const git_diff_options *VAR_5)
{
 git_diff_generated *VAR_6;
 diff_in_progress VAR_7;
 int VAR_8 = 0;

 *VAR_1 = ((void*)0);

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_6);

 VAR_7.repo = VAR_2;
 VAR_7.old_iter = VAR_3;
 VAR_7.new_iter = VAR_4;


 if (FUNC_0(VAR_6, VAR_0)) {
  FUNC_5(VAR_3, 1);
  FUNC_5(VAR_4, 1);
 }


 if ((VAR_8 = FUNC_3(VAR_6, VAR_5)) < 0)
  goto cleanup;

 if ((VAR_8 = FUNC_9(&VAR_7.oitem, VAR_3)) < 0 ||
  (VAR_8 = FUNC_9(&VAR_7.nitem, VAR_4)) < 0)
  goto cleanup;


 while (!VAR_8 && (VAR_7.oitem || VAR_7.nitem)) {
  int VAR_9;


  if (VAR_5 && VAR_5->progress_cb) {
   if ((VAR_8 = VAR_5->progress_cb(&VAR_6->base,
     VAR_7.oitem ? VAR_7.oitem->path : ((void*)0),
     VAR_7.nitem ? VAR_7.nitem->path : ((void*)0),
     VAR_5->payload)))
    break;
  }

  VAR_9 = VAR_7.oitem ?
   (VAR_7.nitem ? VAR_6->base.entrycomp(VAR_7.oitem, VAR_7.nitem) : -1) : 1;


  if (VAR_9 < 0)
   VAR_8 = FUNC_8(VAR_6, &VAR_7);




  else if (VAR_9 > 0)
   VAR_8 = FUNC_7(VAR_6, &VAR_7);




  else
   VAR_8 = FUNC_6(VAR_6, &VAR_7);
 }

 VAR_6->base.perf.stat_calls +=
  VAR_3->stat_calls + VAR_4->stat_calls;

cleanup:
 if (!VAR_8)
  *VAR_1 = &VAR_6->base;
 else
  FUNC_4(&VAR_6->base);

 return VAR_8;
}

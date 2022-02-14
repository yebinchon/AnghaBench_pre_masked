
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int filters; } ;
typedef TYPE_1__ git_filter_list ;
struct TYPE_11__ {void* payload; int * filter; } ;
typedef TYPE_2__ git_filter_entry ;
struct TYPE_12__ {int initialized; } ;
typedef TYPE_3__ git_filter_def ;
typedef int git_filter ;
struct TYPE_13__ {int lock; int filters; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_7__ VAR_3 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 (size_t*,int *,int ,int *) ;

int FUNC_9(
 git_filter_list *VAR_4, git_filter *VAR_5, void *VAR_6)
{
 int VAR_7 = 0;
 size_t VAR_8;
 git_filter_def *VAR_9 = ((void*)0);
 git_filter_entry *VAR_10;

 FUNC_1(VAR_4 && VAR_5);

 if (FUNC_5(&VAR_3.lock) < 0) {
  FUNC_4(VAR_1, "failed to lock filter registry");
  return -1;
 }

 if (FUNC_8(
   &VAR_8, &VAR_3.filters,
   VAR_2, VAR_5) == 0)
  VAR_9 = FUNC_7(&VAR_3.filters, VAR_8);

 FUNC_6(&VAR_3.lock);

 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_0, "cannot use an unregistered filter");
  return -1;
 }

 if (!VAR_9->initialized && (VAR_7 = FUNC_2(VAR_9)) < 0)
  return VAR_7;

 VAR_10 = FUNC_3(VAR_4->filters);
 FUNC_0(VAR_10);
 VAR_10->filter = VAR_5;
 VAR_10->payload = VAR_6;

 return 0;
}

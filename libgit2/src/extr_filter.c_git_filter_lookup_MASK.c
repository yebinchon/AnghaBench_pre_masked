
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * filter; int initialized; } ;
typedef TYPE_1__ git_filter_def ;
typedef int git_filter ;
struct TYPE_6__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 TYPE_1__* FUNC_1 (size_t*,char const*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

git_filter *FUNC_5(const char *VAR_2)
{
 size_t VAR_3;
 git_filter_def *VAR_4;
 git_filter *VAR_5 = ((void*)0);

 if (FUNC_3(&VAR_1.lock) < 0) {
  FUNC_2(VAR_0, "failed to lock filter registry");
  return ((void*)0);
 }

 if ((VAR_4 = FUNC_1(&VAR_3, VAR_2)) == ((void*)0) ||
  (!VAR_4->initialized && FUNC_0(VAR_4) < 0))
  goto done;

 VAR_5 = VAR_4->filter;

done:
 FUNC_4(&VAR_1.lock);
 return VAR_5;
}

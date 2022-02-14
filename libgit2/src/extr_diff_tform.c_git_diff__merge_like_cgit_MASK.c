
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_pool ;
struct TYPE_8__ {int flags; int size; int mode; int id; } ;
struct TYPE_9__ {scalar_t__ status; int nfiles; TYPE_1__ old_file; } ;
typedef TYPE_2__ git_diff_delta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__ const*,int *) ;
 int FUNC_2 (int *,int *) ;

git_diff_delta *FUNC_3(
 const git_diff_delta *VAR_6,
 const git_diff_delta *VAR_7,
 git_pool *VAR_8)
{
 git_diff_delta *VAR_9;
 if (VAR_7->status == VAR_1)
  return FUNC_1(VAR_7, VAR_8);
 if (VAR_6->status == VAR_1)
  return FUNC_1(VAR_6, VAR_8);


 if (VAR_7->status == VAR_3 || VAR_6->status == VAR_2)
  return FUNC_1(VAR_6, VAR_8);


 if ((VAR_9 = FUNC_1(VAR_7, VAR_8)) == ((void*)0))
  return ((void*)0);


 if (VAR_6->status == VAR_3 ||
  VAR_6->status == VAR_5 ||
  VAR_6->status == VAR_4)
  return VAR_9;

 FUNC_0(VAR_7->status != VAR_3);




 if (VAR_9->status == VAR_2) {
  if (VAR_6->status == VAR_0) {
   VAR_9->status = VAR_3;
   VAR_9->nfiles = 2;
  }

 } else {
  VAR_9->status = VAR_6->status;
  VAR_9->nfiles = VAR_6->nfiles;
 }

 FUNC_2(&VAR_9->old_file.id, &VAR_6->old_file.id);
 VAR_9->old_file.mode = VAR_6->old_file.mode;
 VAR_9->old_file.size = VAR_6->old_file.size;
 VAR_9->old_file.flags = VAR_6->old_file.flags;

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_indexer_progress ;
struct TYPE_3__ {int progress_payload; int (* progress_cb ) (int *,int ) ;} ;
typedef TYPE_1__ git_indexer ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(git_indexer *VAR_0, git_indexer_progress *VAR_1)
{
 if (VAR_0->progress_cb)
  return FUNC_0(
   VAR_0->progress_cb(VAR_1, VAR_0->progress_payload),
   "indexer progress");
 return 0;
}

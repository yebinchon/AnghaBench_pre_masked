
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_packbuilder_progress ;
struct TYPE_3__ {void* progress_cb_payload; int progress_cb; } ;
typedef TYPE_1__ git_packbuilder ;



int FUNC_0(git_packbuilder *VAR_0, git_packbuilder_progress VAR_1, void *VAR_2)
{
 if (!VAR_0)
  return -1;

 VAR_0->progress_cb = VAR_1;
 VAR_0->progress_cb_payload = VAR_2;

 return 0;
}

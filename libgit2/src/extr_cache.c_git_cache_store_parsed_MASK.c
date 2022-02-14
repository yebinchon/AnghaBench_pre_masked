
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_object ;
typedef int git_cached_obj ;
typedef int git_cache ;


 int VAR_0 ;
 void* FUNC_0 (int *,int *) ;

void *FUNC_1(git_cache *VAR_1, git_object *VAR_2)
{
 VAR_2->cached.flags = VAR_0;
 return FUNC_0(VAR_1, (git_cached_obj *)VAR_2);
}

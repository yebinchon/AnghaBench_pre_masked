
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_rawobj ;
struct TYPE_4__ {int raw; int refcount; } ;
typedef TYPE_1__ git_pack_cache_entry ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static git_pack_cache_entry *FUNC_3(git_rawobj *VAR_0)
{
 git_pack_cache_entry *VAR_1 = FUNC_0(1, sizeof(git_pack_cache_entry));
 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_1->refcount);
 FUNC_2(&VAR_1->raw, VAR_0, sizeof(git_rawobj));

 return VAR_1;
}

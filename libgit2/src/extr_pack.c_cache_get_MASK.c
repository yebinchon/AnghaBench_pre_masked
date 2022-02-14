
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ last_usage; int refcount; } ;
typedef TYPE_1__ git_pack_cache_entry ;
struct TYPE_7__ {int lock; int use_ctr; int entries; } ;
typedef TYPE_2__ git_pack_cache ;
typedef int git_off_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

__attribute__((used)) static git_pack_cache_entry *FUNC_4(git_pack_cache *VAR_0, git_off_t VAR_1)
{
 git_pack_cache_entry *VAR_2;

 if (FUNC_1(&VAR_0->lock) < 0)
  return ((void*)0);

 if ((VAR_2 = FUNC_3(VAR_0->entries, VAR_1)) != ((void*)0)) {
  FUNC_0(&VAR_2->refcount);
  VAR_2->last_usage = VAR_0->use_ctr++;
 }
 FUNC_2(&VAR_0->lock);

 return VAR_2;
}

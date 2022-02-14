
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unpack_trees_options {int exiting_early; struct cache_entry const* df_conflict_entry; struct rev_info* unpack_data; } ;
struct TYPE_4__ {TYPE_1__* repo; } ;
struct rev_info {TYPE_2__ diffopt; int prune_data; } ;
struct cache_entry {int dummy; } ;
struct TYPE_3__ {int index; } ;


 scalar_t__ FUNC_0 (int ,struct cache_entry const*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct unpack_trees_options*,struct cache_entry const*,struct cache_entry const*) ;

__attribute__((used)) static int FUNC_3(const struct cache_entry * const *VAR_0,
         struct unpack_trees_options *VAR_1)
{
 const struct cache_entry *VAR_2 = VAR_0[0];
 const struct cache_entry *VAR_3 = VAR_0[1];
 struct rev_info *VAR_4 = VAR_1->unpack_data;







 if (VAR_3 == VAR_1->df_conflict_entry)
  VAR_3 = ((void*)0);

 if (FUNC_0(VAR_4->diffopt.repo->index,
     VAR_2 ? VAR_2 : VAR_3,
     &VAR_4->prune_data, ((void*)0))) {
  FUNC_2(VAR_1, VAR_2, VAR_3);
  if (FUNC_1(&VAR_4->diffopt)) {
   VAR_1->exiting_early = 1;
   return -1;
  }
 }

 return 0;
}

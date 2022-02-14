
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int dummy; } ;
struct index_state {int cache_changed; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct index_state*,struct cache_entry*) ;
 scalar_t__ FUNC_2 (struct cache_entry*,int ,struct unpack_trees_options*) ;
 scalar_t__ FUNC_3 (struct cache_entry*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_4(struct index_state *VAR_8,
     struct cache_entry *VAR_9,
     struct unpack_trees_options *VAR_10)
{
 int VAR_11 = FUNC_0(VAR_9);

 if (VAR_9->ce_flags & VAR_1)
  VAR_9->ce_flags |= VAR_3;
 else
  VAR_9->ce_flags &= ~VAR_3;
 if (VAR_11 != FUNC_0(VAR_9)) {
  VAR_9->ce_flags |= VAR_5;
  FUNC_1(VAR_8, VAR_9);
  VAR_8->cache_changed |= VAR_0;
 }
 if (VAR_11 && FUNC_0(VAR_9)) {
  VAR_9->ce_flags &= ~VAR_4;







  if (VAR_9->ce_flags & VAR_2)
   VAR_9->ce_flags &= ~VAR_6;
 }

 if (!VAR_11 && FUNC_0(VAR_9)) {





  if (!(VAR_9->ce_flags & VAR_4) && FUNC_3(VAR_9, VAR_10))
   return -1;
  VAR_9->ce_flags |= VAR_6;
  VAR_9->ce_flags &= ~VAR_4;
 }
 if (VAR_11 && !FUNC_0(VAR_9)) {
  if (FUNC_2(VAR_9, VAR_7, VAR_10))
   return -1;
  VAR_9->ce_flags |= VAR_4;
 }
 return 0;
}

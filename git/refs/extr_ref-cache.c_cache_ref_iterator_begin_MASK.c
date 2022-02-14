
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct ref_dir {int dummy; } ;
struct ref_cache {int root; } ;
struct cache_ref_iterator_level {int index; int prefix_state; struct ref_dir* dir; } ;
struct cache_ref_iterator {int levels_nr; int prefix; struct cache_ref_iterator_level* levels; int levels_alloc; struct ref_iterator base; } ;


 int FUNC_0 (struct cache_ref_iterator_level*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ref_iterator*,int *,int) ;
 int VAR_2 ;
 struct ref_iterator* FUNC_2 () ;
 struct ref_dir* FUNC_3 (struct ref_dir*,char const*,int ) ;
 struct ref_dir* FUNC_4 (int ) ;
 int FUNC_5 (struct ref_dir*,char const*) ;
 struct cache_ref_iterator* FUNC_6 (int,int) ;
 int FUNC_7 (char const*) ;

struct ref_iterator *FUNC_8(struct ref_cache *VAR_3,
           const char *VAR_4,
           int VAR_5)
{
 struct ref_dir *VAR_6;
 struct cache_ref_iterator *VAR_7;
 struct ref_iterator *VAR_8;
 struct cache_ref_iterator_level *VAR_9;

 VAR_6 = FUNC_4(VAR_3->root);
 if (VAR_4 && *VAR_4)
  VAR_6 = FUNC_3(VAR_6, VAR_4, 0);
 if (!VAR_6)

  return FUNC_2();

 if (VAR_5)
  FUNC_5(VAR_6, VAR_4);

 VAR_7 = FUNC_6(1, sizeof(*VAR_7));
 VAR_8 = &VAR_7->base;
 FUNC_1(VAR_8, &VAR_2, 1);
 FUNC_0(VAR_7->levels, 10, VAR_7->levels_alloc);

 VAR_7->levels_nr = 1;
 VAR_9 = &VAR_7->levels[0];
 VAR_9->index = -1;
 VAR_9->dir = VAR_6;

 if (VAR_4 && *VAR_4) {
  VAR_7->prefix = FUNC_7(VAR_4);
  VAR_9->prefix_state = VAR_1;
 } else {
  VAR_9->prefix_state = VAR_0;
 }

 return VAR_8;
}

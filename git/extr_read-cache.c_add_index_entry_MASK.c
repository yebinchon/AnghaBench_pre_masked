
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; int cache_changed; scalar_t__ cache; int cache_alloc; } ;
struct cache_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_3 (struct index_state*,int,struct cache_entry*) ;

int FUNC_4(struct index_state *VAR_2, struct cache_entry *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 & VAR_0)
  VAR_5 = VAR_2->cache_nr;
 else {
  int VAR_6;
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_6 <= 0)
   return VAR_6;
  VAR_5 = VAR_6 - 1;
 }


 FUNC_0(VAR_2->cache, VAR_2->cache_nr + 1, VAR_2->cache_alloc);


 VAR_2->cache_nr++;
 if (VAR_2->cache_nr > VAR_5 + 1)
  FUNC_1(VAR_2->cache + VAR_5 + 1, VAR_2->cache + VAR_5,
      VAR_2->cache_nr - VAR_5 - 1);
 FUNC_3(VAR_2, VAR_5, VAR_3);
 VAR_2->cache_changed |= VAR_1;
 return 0;
}

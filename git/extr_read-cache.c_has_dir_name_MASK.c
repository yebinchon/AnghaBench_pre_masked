
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry const** cache; } ;
typedef struct cache_entry {char* name; int ce_flags; } const cache_entry ;


 int VAR_0 ;
 size_t FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct cache_entry const*) ;
 int FUNC_2 (struct index_state*,char const*,size_t,int) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct index_state*,int) ;
 int FUNC_5 (char const*,char*,size_t*) ;

__attribute__((used)) static int FUNC_6(struct index_state *VAR_1,
   const struct cache_entry *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = FUNC_1(VAR_2);
 const char *VAR_7 = VAR_2->name;
 const char *VAR_8 = VAR_7 + FUNC_0(VAR_2);
 size_t VAR_9;
 int VAR_10 = 0;
 if (VAR_1->cache_nr > 0) {
  VAR_10 = FUNC_5(VAR_7,
   VAR_1->cache[VAR_1->cache_nr - 1]->name,
   &VAR_9);
  if (VAR_10 > 0) {
   if (VAR_9 == 0) {





    return VAR_5;
   } else {






   }
  } else if (VAR_10 == 0) {






  }
 }

 for (;;) {
  size_t VAR_11;

  for (;;) {
   if (*--VAR_8 == '/')
    break;
   if (VAR_8 <= VAR_2->name)
    return VAR_5;
  }
  VAR_11 = VAR_8 - VAR_7;

  if (VAR_10 > 0) {
   if (VAR_11 + 1 <= VAR_9) {
    return VAR_5;
   }

   if (VAR_11 > VAR_9) {
    return VAR_5;
   }

   if (VAR_1->cache_nr > 0 &&
    FUNC_0(VAR_1->cache[VAR_1->cache_nr - 1]) > VAR_11) {
    return VAR_5;
   }
  }

  VAR_3 = FUNC_2(VAR_1, VAR_7, VAR_11, VAR_6);
  if (VAR_3 >= 0) {
   if (!(VAR_1->cache[VAR_3]->ce_flags & VAR_0)) {
    VAR_5 = -1;
    if (!VAR_4)
     break;
    FUNC_4(VAR_1, VAR_3);
    continue;
   }
  }
  else
   VAR_3 = -VAR_3-1;






  while (VAR_3 < VAR_1->cache_nr) {
   struct cache_entry *VAR_12 = VAR_1->cache[VAR_3];
   if ((FUNC_0(VAR_12) <= VAR_11) ||
       (VAR_12->name[VAR_11] != '/') ||
       FUNC_3(VAR_12->name, VAR_7, VAR_11))
    break;
   if (FUNC_1(VAR_12) == VAR_6 && !(VAR_12->ce_flags & VAR_0))






    return VAR_5;
   VAR_3++;
  }
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct cache_entry {int name; int ce_mode; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct index_state*,int ) ;
 int FUNC_2 (struct cache_entry*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct cache_entry*) ;
 scalar_t__ FUNC_4 (struct cache_entry*) ;
 scalar_t__ FUNC_5 (struct index_state*,struct cache_entry*,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct index_state*,int ,int ,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct index_state*,int) ;
 int FUNC_10 (struct index_state*,int,struct cache_entry*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct index_state*,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct index_state *VAR_5, struct cache_entry *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_7 & VAR_2;
 int VAR_10 = VAR_7 & VAR_3;
 int VAR_11 = VAR_7 & VAR_4;
 int VAR_12 = VAR_7 & VAR_1;

 if (!(VAR_7 & VAR_0))
  FUNC_1(VAR_5, VAR_6->name);





 if (VAR_5->cache_nr > 0 &&
  FUNC_11(VAR_6->name, VAR_5->cache[VAR_5->cache_nr - 1]->name) > 0)
  VAR_8 = FUNC_8(VAR_5->cache_nr);
 else
  VAR_8 = FUNC_7(VAR_5, VAR_6->name, FUNC_2(VAR_6), FUNC_4(VAR_6));


 if (VAR_8 >= 0) {
  if (!VAR_12)
   FUNC_10(VAR_5, VAR_8, VAR_6);
  return 0;
 }
 VAR_8 = -VAR_8-1;

 if (!(VAR_7 & VAR_0))
  FUNC_12(VAR_5, VAR_6->name);





 if (VAR_8 < VAR_5->cache_nr && FUNC_4(VAR_6) == 0) {
  while (FUNC_3(VAR_5->cache[VAR_8], VAR_6)) {
   VAR_9 = 1;
   if (!FUNC_9(VAR_5, VAR_8))
    break;
  }
 }

 if (!VAR_9)
  return -1;
 if (!FUNC_13(VAR_6->name, VAR_6->ce_mode))
  return FUNC_6(FUNC_0("invalid path '%s'"), VAR_6->name);

 if (!VAR_11 &&
     FUNC_5(VAR_5, VAR_6, VAR_8, VAR_10)) {
  if (!VAR_10)
   return FUNC_6(FUNC_0("'%s' appears as both a file and as a directory"),
         VAR_6->name);
  VAR_8 = FUNC_7(VAR_5, VAR_6->name, FUNC_2(VAR_6), FUNC_4(VAR_6));
  VAR_8 = -VAR_8-1;
 }
 return VAR_8 + 1;
}

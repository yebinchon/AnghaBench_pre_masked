
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {char const* name; } ;


 scalar_t__ VAR_0 ;
 struct cache_entry** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_entry*) ;
 size_t FUNC_1 (struct cache_entry*) ;
 scalar_t__ FUNC_2 (struct cache_entry*,int *,int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int ** VAR_6 ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;
 struct cache_entry *VAR_11 = ((void*)0);

 for (VAR_9 = 0; VAR_9 < VAR_2 ; VAR_9++) {
  struct cache_entry *VAR_12 = VAR_1[VAR_9];
  if (FUNC_1(VAR_12) != VAR_3
      && (VAR_0 != VAR_3 || !FUNC_1(VAR_12)))
   continue;
  if (VAR_7 && *VAR_7 &&
      (FUNC_0(VAR_12) <= VAR_8 ||
       FUNC_4(VAR_7, VAR_12->name, VAR_8)))
   continue;
  if (VAR_11 && VAR_5) {
   if (FUNC_0(VAR_11) != FUNC_0(VAR_12)
       || FUNC_4(VAR_11->name, VAR_12->name, FUNC_0(VAR_12)))
    FUNC_5(VAR_11->name, VAR_7);
  }
  if (FUNC_2(VAR_12, &VAR_4,
       VAR_5 ? VAR_6[FUNC_1(VAR_12)] : ((void*)0),
       ((void*)0)) < 0)
   VAR_10++;
  VAR_11 = VAR_12;
 }
 if (VAR_11 && VAR_5)
  FUNC_5(VAR_11->name, VAR_7);
 if (VAR_10)



  FUNC_3(128);
}

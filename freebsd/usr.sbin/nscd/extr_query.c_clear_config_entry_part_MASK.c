
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int * negative_cache_entry; int * positive_cache_entry; } ;
typedef int cache_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void (*) (struct configuration_entry*,char const*,size_t)) ;
 int FUNC_1 (void (*) (struct configuration_entry*,char const*,size_t)) ;
 scalar_t__ FUNC_2 (struct configuration_entry*,char const*,int **,int **) ;
 int FUNC_3 (struct configuration_entry*,int ) ;
 int FUNC_4 (struct configuration_entry*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,char const*,size_t,int ) ;

__attribute__((used)) static void
FUNC_7(struct configuration_entry *VAR_5,
 const char *VAR_6, size_t VAR_7)
{
 cache_entry *VAR_8, *VAR_9, *VAR_10;
 FUNC_0(FUNC_7);
 FUNC_3(VAR_5, VAR_2);
 if (VAR_5->positive_cache_entry != ((void*)0))
  FUNC_6(
   VAR_5->positive_cache_entry,
   VAR_3, VAR_6, VAR_7, VAR_4);
 FUNC_4(VAR_5, VAR_2);

 FUNC_3(VAR_5, VAR_1);
 if (VAR_5->negative_cache_entry != ((void*)0))
  FUNC_6(
   VAR_5->negative_cache_entry,
   VAR_3, VAR_6, VAR_7, VAR_4);
 FUNC_4(VAR_5, VAR_1);

 FUNC_3(VAR_5, VAR_0);
 if (FUNC_2(VAR_5,
  VAR_6, &VAR_8, &VAR_9) == 0) {
  for (VAR_10 = VAR_8; VAR_10 != VAR_9; ++VAR_10)
   FUNC_5(*VAR_10, VAR_3);
 }
 FUNC_4(VAR_5, VAR_0);

 FUNC_1(FUNC_7);
}

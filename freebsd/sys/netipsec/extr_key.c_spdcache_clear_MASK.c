
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdcache_entry {int dummy; } ;


 int FUNC_0 (int *) ;
 struct spdcache_entry* FUNC_1 (int *) ;
 int FUNC_2 (struct spdcache_entry*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct spdcache_entry*) ;

void
FUNC_6(void)
{
 struct spdcache_entry *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0 + 1; ++VAR_4) {
  FUNC_3(VAR_4);
  while (!FUNC_0(&VAR_1[VAR_4])) {
   VAR_3 = FUNC_1(&VAR_1[VAR_4]);
   FUNC_2(VAR_3, VAR_2);
   FUNC_5(VAR_3);
  }
  FUNC_4(VAR_4);
 }
}

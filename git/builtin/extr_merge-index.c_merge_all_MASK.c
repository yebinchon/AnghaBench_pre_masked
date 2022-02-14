
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int name; } ;


 struct cache_entry** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  const struct cache_entry *VAR_3 = VAR_0[VAR_2];
  if (!FUNC_0(VAR_3))
   continue;
  VAR_2 += FUNC_1(VAR_2, VAR_3->name)-1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct index_state {int cache_nr; int * cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*,int ,struct stat*,int ) ;
 int FUNC_1 (struct index_state*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct index_state *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2, VAR_1, FUNC_3(VAR_1));

 if ((VAR_3 >= 0) && (VAR_3 < VAR_2->cache_nr)) {
  struct stat VAR_4;
  if (FUNC_2(VAR_1, &VAR_4) == 0 &&
      FUNC_0(VAR_2, VAR_2->cache[VAR_3], &VAR_4, 0) & VAR_0)
   return 0;
 }

 return 1;
}

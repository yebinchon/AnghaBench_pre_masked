
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct index_state *VAR_4)
{
 int VAR_5;

 VAR_2 = 0;

 if (!VAR_3)
  return 0;






 if (!VAR_1)
  return 0;

 VAR_5 = FUNC_0();
 if (VAR_5 < 2)
  return 0;

 if (VAR_4->cache_nr < 2 * VAR_0)
  return 0;

 if (VAR_4->cache_nr < VAR_5 * VAR_0)
  VAR_5 = VAR_4->cache_nr / VAR_0;
 VAR_2 = VAR_5;
 return VAR_2;
}

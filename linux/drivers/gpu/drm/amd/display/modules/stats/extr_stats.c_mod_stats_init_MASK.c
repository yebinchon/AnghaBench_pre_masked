
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_stats {int dummy; } ;
struct dc {int dummy; } ;
struct core_stats {struct dc* dc; } ;


 struct core_stats* FUNC_0 (struct mod_stats*) ;

bool FUNC_1(struct mod_stats *VAR_0)
{
 bool VAR_1 = 0;
 struct core_stats *VAR_2 = ((void*)0);
 struct dc *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
  return 0;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2->dc;

 return VAR_1;
}

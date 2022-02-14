
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct index_state*,char const*) ;
 int FUNC_1 (struct index_state*,char const*,int ) ;
 int FUNC_2 (struct index_state*,int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct index_state*,char const*) ;

int FUNC_6(struct index_state *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1, FUNC_4(VAR_1));
 if (VAR_2 < 0)
  VAR_2 = -VAR_2-1;
 FUNC_0(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 while (VAR_2 < VAR_0->cache_nr && !FUNC_3(VAR_0->cache[VAR_2]->name, VAR_1))
  FUNC_2(VAR_0, VAR_2);
 return 0;
}

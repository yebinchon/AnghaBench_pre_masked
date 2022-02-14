
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oid_stat {int dummy; } ;
struct index_state {TYPE_1__** cache; } ;
struct TYPE_2__ {int oid; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,struct oid_stat*,size_t*,char**) ;
 int FUNC_2 (struct index_state const*,char const*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const struct index_state *VAR_0,
           const char *VAR_1,
           size_t *VAR_2, char **VAR_3,
           struct oid_stat *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_1);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_6);
 if (VAR_5 < 0)
  return -1;
 if (!FUNC_0(VAR_0->cache[VAR_5]))
  return -1;

 return FUNC_1(&VAR_0->cache[VAR_5]->oid, VAR_4, VAR_2, VAR_3);
}

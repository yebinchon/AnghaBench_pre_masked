
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union cache_topology {TYPE_1__* ci; int raw; } ;
struct cpu_cacheinfo {unsigned int num_levels; unsigned int num_leaves; struct cacheinfo* info_list; } ;
struct cacheinfo {int dummy; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;
struct TYPE_2__ {scalar_t__ scope; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 struct cpu_cacheinfo* FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;

int FUNC_5(unsigned int VAR_7)
{
 struct cpu_cacheinfo *VAR_8 = FUNC_3(VAR_7);
 struct cacheinfo *VAR_9 = VAR_8->info_list;
 unsigned int VAR_10, VAR_11, VAR_12;
 union cache_topology VAR_13;
 enum cache_type VAR_14;

 if (!FUNC_4(34))
  return -VAR_5;
 VAR_13.raw = FUNC_1(VAR_6, 0, 0);
 for (VAR_11 = 0, VAR_10 = 0; VAR_10 < VAR_8->num_levels &&
      VAR_11 < VAR_8->num_leaves; VAR_11++, VAR_10++) {
  if (!VAR_9)
   return -VAR_4;
  VAR_12 = (VAR_13.ci[VAR_10].scope == VAR_0) ? 1 : 0;
  VAR_14 = FUNC_2(&VAR_13.ci[0], VAR_10);
  if (VAR_14 == VAR_3) {
   FUNC_0(VAR_9++, VAR_12, VAR_1, VAR_10, VAR_7);
   FUNC_0(VAR_9++, VAR_12, VAR_2, VAR_10, VAR_7);
  } else {
   FUNC_0(VAR_9++, VAR_12, VAR_14, VAR_10, VAR_7);
  }
 }
 return 0;
}

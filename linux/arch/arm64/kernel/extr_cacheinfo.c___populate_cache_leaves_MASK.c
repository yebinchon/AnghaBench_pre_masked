
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cacheinfo {unsigned int num_levels; unsigned int num_leaves; struct cacheinfo* info_list; } ;
struct cacheinfo {int dummy; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct cpu_cacheinfo* FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 enum cache_type VAR_6;
 struct cpu_cacheinfo *VAR_7 = FUNC_2(VAR_3);
 struct cacheinfo *VAR_8 = VAR_7->info_list;

 for (VAR_5 = 0, VAR_4 = 1; VAR_4 <= VAR_7->num_levels &&
      VAR_5 < VAR_7->num_leaves; VAR_5++, VAR_4++) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6 == VAR_2) {
   FUNC_0(VAR_8++, VAR_0, VAR_4);
   FUNC_0(VAR_8++, VAR_1, VAR_4);
  } else {
   FUNC_0(VAR_8++, VAR_6, VAR_4);
  }
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cacheinfo {unsigned int num_levels; unsigned int num_leaves; struct cacheinfo* info_list; } ;
struct cacheinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct cpu_cacheinfo* FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 struct cpu_cacheinfo *VAR_5 = FUNC_1(VAR_2);
 struct cacheinfo *VAR_6 = VAR_5->info_list;

 for (VAR_4 = 0, VAR_3 = 1; VAR_3 <= VAR_5->num_levels &&
      VAR_4 < VAR_5->num_leaves; VAR_4++, VAR_3++) {
  FUNC_0(VAR_6++, VAR_0, VAR_3);
  FUNC_0(VAR_6++, VAR_1, VAR_3);
 }
 return 0;
}

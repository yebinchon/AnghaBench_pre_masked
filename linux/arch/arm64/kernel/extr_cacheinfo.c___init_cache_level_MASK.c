
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cacheinfo {unsigned int num_levels; unsigned int num_leaves; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 struct cpu_cacheinfo* FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 struct cpu_cacheinfo *VAR_9 = FUNC_2(VAR_4);

 for (VAR_6 = 1, VAR_7 = 0; VAR_6 <= VAR_2; VAR_6++) {
  VAR_5 = FUNC_1(VAR_6);
  if (VAR_5 == VAR_0) {
   VAR_6--;
   break;
  }

  VAR_7 += (VAR_5 == VAR_1) ? 2 : 1;
 }

 if (VAR_3)
  VAR_8 = FUNC_3(VAR_4);
 else
  VAR_8 = FUNC_0(VAR_4);

 if (VAR_6 < VAR_8) {





  VAR_7 += (VAR_8 - VAR_6);
  VAR_6 = VAR_8;
 }

 VAR_9->num_levels = VAR_6;
 VAR_9->num_leaves = VAR_7;
 return 0;
}

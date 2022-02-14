
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int * rcaches; } ;


 unsigned int VAR_0 ;
 unsigned long FUNC_0 (int *,unsigned long) ;
 unsigned int FUNC_1 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct iova_domain *VAR_1,
         unsigned long VAR_2,
         unsigned long VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 >= VAR_0)
  return 0;

 return FUNC_0(&VAR_1->rcaches[VAR_4], VAR_3 - VAR_2);
}

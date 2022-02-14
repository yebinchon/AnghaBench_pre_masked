
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_buckets {int * bucket; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct radeon_cs_buckets *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->bucket[VAR_2]);
}

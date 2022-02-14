
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_buckets {int * bucket; } ;
struct list_head {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_1(struct radeon_cs_buckets *VAR_1,
           struct list_head *VAR_2)
{
 unsigned VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(&VAR_1->bucket[VAR_3], VAR_2);
 }
}

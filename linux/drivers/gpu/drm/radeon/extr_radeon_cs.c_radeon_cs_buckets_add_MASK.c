
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_buckets {int * bucket; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*,int *) ;
 size_t FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_cs_buckets *VAR_1,
      struct list_head *VAR_2, unsigned VAR_3)
{





 FUNC_0(VAR_2, &VAR_1->bucket[FUNC_1(VAR_3, VAR_0)]);
}

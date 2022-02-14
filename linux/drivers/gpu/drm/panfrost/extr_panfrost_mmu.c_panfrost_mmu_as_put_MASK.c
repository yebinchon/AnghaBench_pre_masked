
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_mmu {int as_count; } ;
struct panfrost_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct panfrost_device *VAR_0, struct panfrost_mmu *VAR_1)
{
 FUNC_1(&VAR_1->as_count);
 FUNC_0(FUNC_2(&VAR_1->as_count) < 0);
}

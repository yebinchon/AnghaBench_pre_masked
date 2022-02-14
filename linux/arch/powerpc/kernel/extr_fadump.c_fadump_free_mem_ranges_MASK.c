
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fadump_mrange_info {scalar_t__ max_mem_ranges; scalar_t__ mem_ranges_sz; int * mem_ranges; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fadump_mrange_info *VAR_0)
{
 FUNC_0(VAR_0->mem_ranges);
 VAR_0->mem_ranges = ((void*)0);
 VAR_0->mem_ranges_sz = 0;
 VAR_0->max_mem_ranges = 0;
}

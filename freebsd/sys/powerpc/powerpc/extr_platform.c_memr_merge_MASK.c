
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct mem_region {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct mem_region *VAR_0, struct mem_region *VAR_1)
{
 vm_offset_t VAR_2;
 VAR_2 = FUNC_0(VAR_1->mr_start + VAR_1->mr_size, VAR_0->mr_start + VAR_0->mr_size);
 VAR_1->mr_start = FUNC_1(VAR_0->mr_start, VAR_1->mr_start);
 VAR_1->mr_size = VAR_2 - VAR_1->mr_start;
}

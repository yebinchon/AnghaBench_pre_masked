
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; unsigned long high_limit; scalar_t__ align_offset; scalar_t__ align_mask; scalar_t__ flags; } ;


 unsigned long FUNC_0 (struct vm_unmapped_area_info*) ;

__attribute__((used)) static unsigned long
FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
           unsigned long VAR_2)
{
 struct vm_unmapped_area_info VAR_3;

 VAR_3.flags = 0;
 VAR_3.length = VAR_1;
 VAR_3.low_limit = VAR_0;
 VAR_3.high_limit = VAR_2;
 VAR_3.align_mask = 0;
 VAR_3.align_offset = 0;
 return FUNC_0(&VAR_3);
}

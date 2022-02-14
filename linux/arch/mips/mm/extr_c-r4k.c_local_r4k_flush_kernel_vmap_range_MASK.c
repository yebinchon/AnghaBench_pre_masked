
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_kernel_vmap_range_args {unsigned long vaddr; int size; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_1)
{
 struct flush_kernel_vmap_range_args *VAR_2 = VAR_1;
 unsigned long VAR_3 = VAR_2->vaddr;
 int VAR_4 = VAR_2->size;





 VAR_0;
 FUNC_0(VAR_3, VAR_3 + VAR_4);
}

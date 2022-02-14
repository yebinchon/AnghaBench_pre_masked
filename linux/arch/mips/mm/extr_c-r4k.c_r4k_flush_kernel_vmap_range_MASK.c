
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_kernel_vmap_range_args {unsigned long vaddr; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct flush_kernel_vmap_range_args*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_5, int VAR_6)
{
 struct flush_kernel_vmap_range_args VAR_7;

 VAR_7.vaddr = (unsigned long) VAR_5;
 VAR_7.size = VAR_6;

 if (VAR_6 >= VAR_2)
  FUNC_0(VAR_1,
    VAR_4, ((void*)0));
 else
  FUNC_0(VAR_0, VAR_3,
    &VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {int dummy; } ;
struct mem_section {int dummy; } ;
struct drmem_lmb {int base_addr; } ;


 int FUNC_0 (int ) ;
 struct mem_section* FUNC_1 (unsigned long) ;
 struct memory_block* FUNC_2 (struct mem_section*) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static struct memory_block *FUNC_4(struct drmem_lmb *VAR_0)
{
 unsigned long VAR_1;
 struct mem_section *VAR_2;
 struct memory_block *VAR_3;

 VAR_1 = FUNC_3(FUNC_0(VAR_0->base_addr));
 VAR_2 = FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 return VAR_3;
}

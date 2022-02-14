
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct siw_pbl {int dummy; } ;
struct siw_mem {scalar_t__ va; struct siw_pbl* pbl; } ;
struct page {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct siw_pbl*,scalar_t__,int *,int*) ;
 struct page* FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct page *FUNC_2(struct siw_mem *VAR_0, u64 VAR_1, int *VAR_2)
{
 struct siw_pbl *VAR_3 = VAR_0->pbl;
 u64 VAR_4 = VAR_1 - VAR_0->va;
 dma_addr_t VAR_5 = FUNC_0(VAR_3, VAR_4, ((void*)0), VAR_2);

 if (VAR_5)
  return FUNC_1(VAR_5);

 return ((void*)0);
}

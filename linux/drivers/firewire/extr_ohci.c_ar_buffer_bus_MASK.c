
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_context {int * pages; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct ar_context *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->pages[VAR_1]);
}

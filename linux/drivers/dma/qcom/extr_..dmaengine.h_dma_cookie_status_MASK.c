
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_tx_state {scalar_t__ residue; void* used; void* last; } ;
struct dma_chan {void* completed_cookie; void* cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef void* dma_cookie_t ;


 int FUNC_0 () ;
 int FUNC_1 (void*,void*,void*) ;

__attribute__((used)) static inline enum dma_status FUNC_2(struct dma_chan *VAR_0,
 dma_cookie_t VAR_1, struct dma_tx_state *VAR_2)
{
 dma_cookie_t VAR_3, VAR_4;

 VAR_3 = VAR_0->cookie;
 VAR_4 = VAR_0->completed_cookie;
 FUNC_0();
 if (VAR_2) {
  VAR_2->last = VAR_4;
  VAR_2->used = VAR_3;
  VAR_2->residue = 0;
 }
 return FUNC_1(VAR_1, VAR_4, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {void* completed_cookie; void* cookie; } ;


 void* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct dma_chan *VAR_1)
{
 VAR_1->cookie = VAR_0;
 VAR_1->completed_cookie = VAR_0;
}

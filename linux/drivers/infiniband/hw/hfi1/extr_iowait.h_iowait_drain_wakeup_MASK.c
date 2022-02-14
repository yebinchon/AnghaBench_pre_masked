
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowait {int (* sdma_drained ) (struct iowait*) ;int wait_pio; int wait_dma; } ;


 int FUNC_0 (struct iowait*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct iowait *VAR_0)
{
 FUNC_1(&VAR_0->wait_dma);
 FUNC_1(&VAR_0->wait_pio);
 if (VAR_0->sdma_drained)
  VAR_0->sdma_drained(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_host {scalar_t__ msg_dma; } ;
typedef scalar_t__ dma_addr_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(struct carm_host *VAR_1,
       unsigned int VAR_2)
{
 return VAR_1->msg_dma + (VAR_2 * VAR_0);
}

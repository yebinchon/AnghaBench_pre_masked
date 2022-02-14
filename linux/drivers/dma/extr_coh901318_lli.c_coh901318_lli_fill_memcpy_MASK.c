
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct coh901318_pool {int dummy; } ;
struct coh901318_lli {int src_addr; int dst_addr; int control; scalar_t__ link_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct coh901318_lli* FUNC_0 (struct coh901318_lli*) ;

int
FUNC_1(struct coh901318_pool *VAR_1,
     struct coh901318_lli *VAR_2,
     dma_addr_t VAR_3, unsigned int VAR_4,
     dma_addr_t VAR_5, u32 VAR_6,
     u32 VAR_7)
{
 int VAR_8 = VAR_4;
 dma_addr_t VAR_9 = VAR_3;
 dma_addr_t VAR_10 = VAR_5;

 VAR_2->src_addr = VAR_9;
 VAR_2->dst_addr = VAR_10;

 while (VAR_2->link_addr) {
  VAR_2->control = VAR_6 | VAR_0;
  VAR_2->src_addr = VAR_9;
  VAR_2->dst_addr = VAR_10;

  VAR_8 -= VAR_0;
  VAR_2 = FUNC_0(VAR_2);

  VAR_9 += VAR_0;
  VAR_10 += VAR_0;
 }

 VAR_2->control = VAR_7 | VAR_8;
 VAR_2->src_addr = VAR_9;
 VAR_2->dst_addr = VAR_10;

 return 0;
}

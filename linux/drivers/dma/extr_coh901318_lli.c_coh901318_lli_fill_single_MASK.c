
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct coh901318_pool {int dummy; } ;
struct coh901318_lli {int control; size_t src_addr; size_t dst_addr; scalar_t__ link_addr; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct coh901318_lli* FUNC_0 (struct coh901318_lli*) ;

int
FUNC_1(struct coh901318_pool *VAR_4,
     struct coh901318_lli *VAR_5,
     dma_addr_t VAR_6, unsigned int VAR_7,
     dma_addr_t VAR_8, u32 VAR_9, u32 VAR_10,
     enum dma_transfer_direction VAR_11)
{
 int VAR_12 = VAR_7;
 dma_addr_t VAR_13;
 dma_addr_t VAR_14;


 if (VAR_11 == VAR_1) {
  VAR_13 = VAR_6;
  VAR_14 = VAR_8;

 } else if (VAR_11 == VAR_0) {

  VAR_13 = VAR_8;
  VAR_14 = VAR_6;
 } else {
  return -VAR_2;
 }

 while (VAR_5->link_addr) {
  size_t VAR_15 = VAR_3;
  VAR_5->control = VAR_9 | VAR_3;







  if (VAR_12 < (VAR_3 + VAR_3/2))
   VAR_15 = VAR_3/2;

  VAR_12 -= VAR_15;
  VAR_5->src_addr = VAR_13;
  VAR_5->dst_addr = VAR_14;

  VAR_5 = FUNC_0(VAR_5);

  if (VAR_11 == VAR_1)
   VAR_13 += VAR_15;
  else if (VAR_11 == VAR_0)
   VAR_14 += VAR_15;
 }

 VAR_5->control = VAR_10 | VAR_12;
 VAR_5->src_addr = VAR_13;
 VAR_5->dst_addr = VAR_14;

 return 0;
}

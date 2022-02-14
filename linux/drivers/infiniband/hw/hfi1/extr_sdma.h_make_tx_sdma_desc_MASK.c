
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sdma_txreq {size_t num_desc; struct sdma_desc* descp; } ;
struct sdma_desc {int* qw; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_0(
 struct sdma_txreq *VAR_6,
 int VAR_7,
 dma_addr_t VAR_8,
 size_t VAR_9)
{
 struct sdma_desc *VAR_10 = &VAR_6->descp[VAR_6->num_desc];

 if (!VAR_6->num_desc) {

  VAR_10->qw[1] |= ((u64)VAR_7 & VAR_4)
    << VAR_5;
 } else {
  VAR_10->qw[0] = 0;
  VAR_10->qw[1] = ((u64)VAR_7 & VAR_4)
    << VAR_5;
 }
 VAR_10->qw[0] |= (((u64)VAR_8 & VAR_2)
    << VAR_3) |
   (((u64)VAR_9 & VAR_0)
    << VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct pdc_state {scalar_t__ ntxpost; size_t txout; size_t tx_msg_start; scalar_t__* txin_numd; int ntxd; struct scatterlist** src_sg; int txnobuf; int txin; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,size_t,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pdc_state*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct pdc_state *VAR_7, struct scatterlist *VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;





 u32 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14;
 dma_addr_t VAR_15;

 VAR_12 = (u32)FUNC_4(VAR_8);


 VAR_11 = VAR_7->ntxpost - FUNC_0(VAR_7->txin, VAR_7->txout,
           VAR_7->ntxpost);
 if (FUNC_6(VAR_12 > VAR_11)) {
  VAR_7->txnobuf++;
  return -VAR_4;
 }


 if (VAR_7->tx_msg_start == VAR_7->txout) {

  VAR_7->txin_numd[VAR_7->tx_msg_start] = 0;
  VAR_7->src_sg[VAR_7->txout] = VAR_8;
  VAR_9 = VAR_3;
 }

 while (VAR_8) {
  if (FUNC_6(VAR_7->txout == (VAR_7->ntxd - 1)))
   VAR_10 = VAR_1;
  else
   VAR_10 = 0;





  VAR_14 = FUNC_3(VAR_8);
  VAR_15 = FUNC_2(VAR_8);
  while (VAR_14 > VAR_5) {
   FUNC_1(VAR_7, VAR_15, VAR_5,
          VAR_9 | VAR_10);
   VAR_13++;
   VAR_14 -= VAR_5;
   VAR_15 += VAR_5;
   if (FUNC_6(VAR_7->txout == (VAR_7->ntxd - 1)))
    VAR_10 = VAR_1;
   else
    VAR_10 = 0;
  }
  VAR_8 = FUNC_5(VAR_8);
  if (!VAR_8)

   VAR_9 |= (VAR_0 | VAR_2);
  FUNC_1(VAR_7, VAR_15, VAR_14, VAR_9 | VAR_10);
  VAR_13++;

  VAR_9 &= ~VAR_3;
 }
 VAR_7->txin_numd[VAR_7->tx_msg_start] += VAR_13;

 return VAR_6;
}

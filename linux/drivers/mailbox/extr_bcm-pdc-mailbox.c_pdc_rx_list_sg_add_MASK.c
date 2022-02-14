
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct pdc_state {scalar_t__ nrxpost; int rxout; int nrxd; size_t rx_msg_start; TYPE_1__* rx_ctx; int rxnobuf; int rxin; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int rxin_numd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pdc_state*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct pdc_state *VAR_4, struct scatterlist *VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7;





 u32 VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10;
 dma_addr_t VAR_11;

 VAR_8 = (u32)FUNC_4(VAR_5);

 VAR_7 = VAR_4->nrxpost - FUNC_0(VAR_4->rxin, VAR_4->rxout,
           VAR_4->nrxpost);
 if (FUNC_6(VAR_8 > VAR_7)) {
  VAR_4->rxnobuf++;
  return -VAR_1;
 }

 while (VAR_5) {
  if (FUNC_6(VAR_4->rxout == (VAR_4->nrxd - 1)))
   VAR_6 = VAR_0;
  else
   VAR_6 = 0;





  VAR_10 = FUNC_3(VAR_5);
  VAR_11 = FUNC_2(VAR_5);
  while (VAR_10 > VAR_2) {
   FUNC_1(VAR_4, VAR_11, VAR_2, VAR_6);
   VAR_9++;
   VAR_10 -= VAR_2;
   VAR_11 += VAR_2;
   if (FUNC_6(VAR_4->rxout == (VAR_4->nrxd - 1)))
    VAR_6 = VAR_0;
   else
    VAR_6 = 0;
  }
  FUNC_1(VAR_4, VAR_11, VAR_10, VAR_6);
  VAR_9++;
  VAR_5 = FUNC_5(VAR_5);
 }
 VAR_4->rx_ctx[VAR_4->rx_msg_start].rxin_numd += VAR_9;

 return VAR_3;
}

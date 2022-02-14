
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pdc_state {int nrxpost; int ntxpost; int tx_ring_full; int txout; int txin; int rx_ring_full; int rxout; int rxin; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct pdc_state *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 bool VAR_5 = 0;


 VAR_3 = VAR_0->nrxpost - FUNC_0(VAR_0->rxin, VAR_0->rxout,
           VAR_0->nrxpost);
 if (FUNC_3(VAR_2 > VAR_3)) {
  VAR_0->rx_ring_full++;
  VAR_5 = 1;
 }

 if (FUNC_2(!VAR_5)) {
  VAR_4 = VAR_0->ntxpost - FUNC_1(VAR_0->txin, VAR_0->txout,
            VAR_0->ntxpost);
  if (FUNC_3(VAR_1 > VAR_4)) {
   VAR_0->tx_ring_full++;
   VAR_5 = 1;
  }
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct nm_desc {scalar_t__ first_tx_ring; scalar_t__ last_tx_ring; scalar_t__ first_rx_ring; scalar_t__ last_rx_ring; int nifp; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(struct nm_desc *VAR_0, int VAR_1)
{
 u_int VAR_2, VAR_3 = 0;

 if (VAR_1) {
  for (VAR_2 = VAR_0->first_tx_ring; VAR_2 <= VAR_0->last_tx_ring; VAR_2++) {
   VAR_3 += FUNC_2(FUNC_1(VAR_0->nifp, VAR_2));
  }
 } else {
  for (VAR_2 = VAR_0->first_rx_ring; VAR_2 <= VAR_0->last_rx_ring; VAR_2++) {
   VAR_3 += FUNC_2(FUNC_0(VAR_0->nifp, VAR_2));
  }
 }
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq {int nr_tx_rings; int nr_rx_rings; int nr_tx_slots; int nr_rx_slots; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

int
FUNC_5(const char* VAR_1, struct nmreq *VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1 == ((void*)0) || ! *VAR_1)
  return 0;
 VAR_2->nr_tx_rings = VAR_2->nr_rx_rings = 0;
 VAR_2->nr_tx_slots = VAR_2->nr_rx_slots = 0;
 VAR_3 = FUNC_3(VAR_1);
 for (VAR_5 = 0, VAR_4 = FUNC_4(VAR_3, ","); VAR_4; VAR_5++, VAR_4 = FUNC_4(((void*)0), ",")) {
  VAR_6 = FUNC_1(VAR_4);
  switch (VAR_5) {
  case 0:
   VAR_2->nr_tx_slots = VAR_2->nr_rx_slots = VAR_6;
   break;
  case 1:
   VAR_2->nr_rx_slots = VAR_6;
   break;
  case 2:
   VAR_2->nr_tx_rings = VAR_2->nr_rx_rings = VAR_6;
   break;
  case 3:
   VAR_2->nr_rx_rings = VAR_6;
   break;
  default:
   FUNC_0("ignored config: %s", VAR_4);
   break;
  }
 }
 FUNC_0("txr %d txd %d rxr %d rxd %d",
   VAR_2->nr_tx_rings, VAR_2->nr_tx_slots,
   VAR_2->nr_rx_rings, VAR_2->nr_rx_slots);
 FUNC_2(VAR_3);
 return (VAR_2->nr_tx_rings || VAR_2->nr_tx_slots ||
  VAR_2->nr_rx_rings || VAR_2->nr_rx_slots) ?
  VAR_0 : 0;
}

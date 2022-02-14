
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq {int nr_tx_rings; int nr_rx_rings; int nr_tx_slots; int nr_rx_slots; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(const char* VAR_0, struct nmreq *VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4, VAR_5;

 VAR_1->nr_tx_rings = VAR_1->nr_rx_rings = 0;
 VAR_1->nr_tx_slots = VAR_1->nr_rx_slots = 0;
 if (VAR_0 == ((void*)0) || ! *VAR_0)
  return;
 VAR_2 = FUNC_3(VAR_0);
 for (VAR_4 = 0, VAR_3 = FUNC_4(VAR_2, ","); VAR_3; VAR_4++, VAR_3 = FUNC_4(((void*)0), ",")) {
  VAR_5 = FUNC_1(VAR_3);
  switch (VAR_4) {
  case 0:
   VAR_1->nr_tx_slots = VAR_1->nr_rx_slots = VAR_5;
   break;
  case 1:
   VAR_1->nr_rx_slots = VAR_5;
   break;
  case 2:
   VAR_1->nr_tx_rings = VAR_1->nr_rx_rings = VAR_5;
   break;
  case 3:
   VAR_1->nr_rx_rings = VAR_5;
   break;
  default:
   FUNC_0("ignored config: %s", VAR_3);
   break;
  }
 }
 FUNC_0("txr %d txd %d rxr %d rxd %d",
   VAR_1->nr_tx_rings, VAR_1->nr_tx_slots,
   VAR_1->nr_rx_rings, VAR_1->nr_rx_slots);
 FUNC_2(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_mem_id; int nr_tx_rings; int nr_rx_rings; int nr_tx_slots; int nr_rx_slots; int nr_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_1(struct TestContext *VAR_1)
{
 int VAR_2;

 VAR_1->nr_mem_id = 1;
 VAR_1->nr_mode = VAR_0;
 VAR_1->nr_tx_rings = 10;
 VAR_1->nr_rx_rings = 5;
 VAR_1->nr_tx_slots = 256;
 VAR_1->nr_rx_slots = 100;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0) {
  return VAR_2;
 }
 return 0;
}

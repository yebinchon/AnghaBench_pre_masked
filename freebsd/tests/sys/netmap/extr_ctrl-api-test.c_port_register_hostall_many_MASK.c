
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_host_tx_rings; int nr_host_rx_rings; int nr_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_1(struct TestContext *VAR_1)
{
 VAR_1->nr_mode = VAR_0;
 VAR_1->nr_host_tx_rings = 5;
 VAR_1->nr_host_rx_rings = 4;
 return FUNC_0(VAR_1);
}

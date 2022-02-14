
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_flags; int nr_tx_rings; int nr_rx_rings; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct TestContext *VAR_2)
{
 if (VAR_2->nr_flags & VAR_1) {
  return VAR_2->nr_tx_rings;
 }
 if (VAR_2->nr_flags & VAR_0) {
  return VAR_2->nr_rx_rings;
 }

 return VAR_2->nr_tx_rings + VAR_2->nr_rx_rings;
}

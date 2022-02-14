
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc440spe_rxor {scalar_t__ addr_count; int desc_count; } ;
struct ppc440spe_adma_desc_slot {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ppc440spe_adma_desc_slot*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(
  struct ppc440spe_adma_desc_slot *VAR_1,
  struct ppc440spe_rxor *VAR_2, int VAR_3, int VAR_4)
{
 VAR_2->addr_count++;
 if (VAR_3 == VAR_4 - 1) {
  FUNC_0(VAR_1, VAR_2->addr_count);
 } else if (VAR_2->addr_count == VAR_0) {
  FUNC_0(VAR_1, VAR_2->addr_count);
  VAR_2->addr_count = 0;
  VAR_2->desc_count++;
 }
}

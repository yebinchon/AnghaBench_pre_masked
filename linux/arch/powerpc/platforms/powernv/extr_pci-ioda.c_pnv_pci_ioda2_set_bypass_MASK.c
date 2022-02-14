
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pnv_ioda_pe {int pe_number; int tce_bypass_enabled; int tce_bypass_base; TYPE_1__* phb; } ;
typedef int phys_addr_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int opal_id; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int,int,int ,int ) ;
 int FUNC_2 (struct pnv_ioda_pe*,char*,scalar_t__) ;
 int FUNC_3 (struct pnv_ioda_pe*,char*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pnv_ioda_pe *VAR_0, bool VAR_1)
{
 uint16_t VAR_2 = (VAR_0->pe_number << 1 ) + 1;
 int64_t VAR_3;

 FUNC_3(VAR_0, "%sabling 64-bit DMA bypass\n", VAR_1 ? "En" : "Dis");
 if (VAR_1) {
  phys_addr_t VAR_4 = FUNC_0();

  VAR_4 = FUNC_4(VAR_4);
  VAR_3 = FUNC_1(VAR_0->phb->opal_id,
           VAR_0->pe_number,
           VAR_2,
           VAR_0->tce_bypass_base,
           VAR_4);
 } else {
  VAR_3 = FUNC_1(VAR_0->phb->opal_id,
           VAR_0->pe_number,
           VAR_2,
           VAR_0->tce_bypass_base,
           0);
 }
 if (VAR_3)
  FUNC_2(VAR_0, "OPAL error %lld configuring bypass window\n", VAR_3);
 else
  VAR_0->tce_bypass_enabled = VAR_1;
}

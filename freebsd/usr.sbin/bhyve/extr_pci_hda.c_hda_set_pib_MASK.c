
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct hda_softc {scalar_t__ dma_pib_vaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct hda_softc *VAR_2, uint8_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_2, VAR_5 + VAR_0, VAR_4);

 FUNC_1(VAR_2, 0x2000 + VAR_5 + VAR_0, VAR_4);
 if (VAR_2->dma_pib_vaddr)
  *(uint32_t *)(VAR_2->dma_pib_vaddr + VAR_3 * VAR_1) = VAR_4;

}

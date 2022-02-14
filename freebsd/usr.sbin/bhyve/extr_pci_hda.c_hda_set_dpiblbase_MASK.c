
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct hda_softc {int * dma_pib_vaddr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct hda_softc*,int,int) ;
 int FUNC_3 (struct hda_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct hda_softc *VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8 = FUNC_3(VAR_5, VAR_6);
 uint64_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 uint64_t VAR_11 = 0;

 if ((VAR_8 & VAR_1) != (VAR_7 & VAR_1)) {

  if (VAR_8 & VAR_1) {
   VAR_9 = VAR_8 & VAR_2;
   VAR_10 = FUNC_3(VAR_5, VAR_0);

   VAR_11 = VAR_9 | (VAR_10 << 32);
   FUNC_0("DMA Position In Buffer dma_paddr: %p\n",
       (void *)VAR_11);

   VAR_5->dma_pib_vaddr = FUNC_2(VAR_5, VAR_11,
     VAR_3 * VAR_4);
   if (!VAR_5->dma_pib_vaddr) {
    FUNC_0("Fail to get the guest 					 virtual address\n");

    FUNC_1(0);
   }
  } else {
   FUNC_0("DMA Position In Buffer Reset\n");
   VAR_5->dma_pib_vaddr = ((void*)0);
  }
 }
}

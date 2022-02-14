
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
struct hda_codec_cmd_ctl {char* name; int size; int wp; int rp; int run; int dma_vaddr; } ;
struct hda_softc {struct hda_codec_cmd_ctl rirb; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hda_softc*,int,int) ;
 int FUNC_2 (struct hda_softc*,int ) ;
 int FUNC_3 (struct hda_codec_cmd_ctl*) ;
 int* VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct hda_softc *VAR_7)
{
 struct hda_codec_cmd_ctl *VAR_8 = &VAR_7->rirb;
 uint8_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 uint64_t VAR_11 = 0;
 uint64_t VAR_12 = 0;

 VAR_8->name = "RIRB";

 VAR_9 = FUNC_2(VAR_7, VAR_1) & VAR_2;

 VAR_8->size = VAR_6[VAR_9];

 if (!VAR_8->size) {
  FUNC_0("Invalid rirb size\n");
  return (-1);
 }

 VAR_10 = FUNC_2(VAR_7, VAR_0);
 VAR_11 = FUNC_2(VAR_7, VAR_3);

 VAR_12 = VAR_10 | (VAR_11 << 32);
 FUNC_0("RIRB dma_paddr: %p\n", (void *)VAR_12);

 VAR_8->dma_vaddr = FUNC_1(VAR_7, VAR_12,
   VAR_5 * VAR_8->size);
 if (!VAR_8->dma_vaddr) {
  FUNC_0("Fail to get the guest virtual address\n");
  return (-1);
 }

 VAR_8->wp = FUNC_2(VAR_7, VAR_4);
 VAR_8->rp = 0x0000;

 VAR_8->run = 1;

 FUNC_3(VAR_8);

 return (0);
}

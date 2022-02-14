
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
struct hda_codec_cmd_ctl {char* name; int size; int wp; int rp; int run; int dma_vaddr; } ;
struct hda_softc {struct hda_codec_cmd_ctl corb; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (struct hda_softc*,int,int) ;
 int FUNC_2 (struct hda_softc*,int ) ;
 int FUNC_3 (struct hda_codec_cmd_ctl*) ;

__attribute__((used)) static int
FUNC_4(struct hda_softc *VAR_8)
{
 struct hda_codec_cmd_ctl *VAR_9 = &VAR_8->corb;
 uint8_t VAR_10 = 0;
 uint64_t VAR_11 = 0;
 uint64_t VAR_12 = 0;
 uint64_t VAR_13 = 0;

 VAR_9->name = "CORB";

 VAR_10 = FUNC_2(VAR_8, VAR_2) & VAR_3;

 VAR_9->size = VAR_7[VAR_10];

 if (!VAR_9->size) {
  FUNC_0("Invalid corb size\n");
  return (-1);
 }

 VAR_11 = FUNC_2(VAR_8, VAR_0);
 VAR_12 = FUNC_2(VAR_8, VAR_4);

 VAR_13 = VAR_11 | (VAR_12 << 32);
 FUNC_0("CORB dma_paddr: %p\n", (void *)VAR_13);

 VAR_9->dma_vaddr = FUNC_1(VAR_8, VAR_13,
   VAR_6 * VAR_9->size);
 if (!VAR_9->dma_vaddr) {
  FUNC_0("Fail to get the guest virtual address\n");
  return (-1);
 }

 VAR_9->wp = FUNC_2(VAR_8, VAR_5);
 VAR_9->rp = FUNC_2(VAR_8, VAR_1);

 VAR_9->run = 1;

 FUNC_3(VAR_9);

 return (0);
}

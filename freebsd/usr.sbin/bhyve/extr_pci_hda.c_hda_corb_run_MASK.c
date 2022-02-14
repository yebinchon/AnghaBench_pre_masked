
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hda_codec_cmd_ctl {int wp; int rp; int size; scalar_t__ run; scalar_t__ dma_vaddr; } ;
struct hda_softc {struct hda_codec_cmd_ctl corb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hda_softc*,int ) ;
 int FUNC_3 (struct hda_softc*) ;
 int FUNC_4 (struct hda_softc*,int ) ;
 int FUNC_5 (struct hda_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct hda_softc *VAR_3)
{
 struct hda_codec_cmd_ctl *VAR_4 = &VAR_3->corb;
 uint32_t VAR_5 = 0;
 int VAR_6;

 VAR_4->wp = FUNC_2(VAR_3, VAR_1);

 while (VAR_4->rp != VAR_4->wp && VAR_4->run) {
  VAR_4->rp++;
  VAR_4->rp %= VAR_4->size;

  VAR_5 = FUNC_1(VAR_4->dma_vaddr + VAR_2 * VAR_4->rp);


  VAR_6 = FUNC_4(VAR_3, VAR_5);
  FUNC_0(!VAR_6);
 }

 FUNC_5(VAR_3, VAR_0, VAR_4->rp);

 if (VAR_4->run)
  FUNC_3(VAR_3);

 return (0);
}

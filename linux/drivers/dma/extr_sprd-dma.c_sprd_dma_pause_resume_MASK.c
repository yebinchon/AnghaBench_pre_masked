
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int dev; } ;
struct sprd_dma_dev {TYPE_2__ dma_dev; } ;
struct TYPE_3__ {int chan; } ;
struct sprd_dma_chn {scalar_t__ chn_base; TYPE_1__ vc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sprd_dma_chn*,scalar_t__,int ,int ) ;
 struct sprd_dma_dev* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sprd_dma_chn *VAR_4, bool VAR_5)
{
 struct sprd_dma_dev *VAR_6 = FUNC_4(&VAR_4->vc.chan);
 u32 VAR_7, VAR_8 = VAR_1;

 if (VAR_5) {
  FUNC_3(VAR_4, VAR_0,
        VAR_2, VAR_2);

  do {
   VAR_7 = FUNC_2(VAR_4->chn_base + VAR_0);
   if (VAR_7 & VAR_3)
    break;

   FUNC_0();
  } while (--VAR_8 > 0);

  if (!VAR_8)
   FUNC_1(VAR_6->dma_dev.dev,
     "pause dma controller timeout\n");
 } else {
  FUNC_3(VAR_4, VAR_0,
        VAR_2, 0);
 }
}

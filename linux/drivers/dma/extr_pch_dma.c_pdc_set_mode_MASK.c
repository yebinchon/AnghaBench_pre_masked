
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pch_dma {int dummy; } ;
struct dma_chan {int chan_id; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct pch_dma*,int ) ;
 int FUNC_3 (struct pch_dma*,int ,int) ;
 struct pch_dma* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_7, u32 VAR_8)
{
 struct pch_dma *VAR_9 = FUNC_4(VAR_7->device);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_7->chan_id < 8) {
  VAR_11 = VAR_5 & ~(VAR_4 <<
      (VAR_2 * VAR_7->chan_id));
  VAR_12 = 1 << (VAR_2 * VAR_7->chan_id + VAR_3);

  VAR_10 = FUNC_2(VAR_9, VAR_0);
  VAR_10 &= VAR_12;
  VAR_10 |= VAR_8 << (VAR_2 * VAR_7->chan_id);
  VAR_10 |= VAR_11;
  FUNC_3(VAR_9, VAR_0, VAR_10);
 } else {
  int VAR_13 = VAR_7->chan_id - 8;
  VAR_11 = VAR_6 & ~(VAR_4 <<
       (VAR_2 * VAR_13));
  VAR_12 = 1 << (VAR_2 * VAR_13 + VAR_3);

  VAR_10 = FUNC_2(VAR_9, VAR_1);
  VAR_10 &= VAR_12;
  VAR_10 |= VAR_8 << (VAR_2 * VAR_13);
  VAR_10 |= VAR_11;
  FUNC_3(VAR_9, VAR_1, VAR_10);
 }

 FUNC_1(FUNC_0(VAR_7), "pdc_set_mode: chan %d -> %x\n",
  VAR_7->chan_id, VAR_10);
}

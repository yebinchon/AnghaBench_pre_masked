
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pch_dma_chan {scalar_t__ dir; } ;
struct pch_dma {int dummy; } ;
struct dma_chan {int chan_id; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct pch_dma*,int ) ;
 int FUNC_3 (struct pch_dma*,int ,int) ;
 struct pch_dma* FUNC_4 (int ) ;
 struct pch_dma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_8)
{
 struct pch_dma_chan *VAR_9 = FUNC_5(VAR_8);
 struct pch_dma *VAR_10 = FUNC_4(VAR_8->device);
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_8->chan_id < 8) {
  VAR_11 = FUNC_2(VAR_10, VAR_0);

  VAR_12 = VAR_4 <<
     (VAR_2 * VAR_8->chan_id);
  VAR_13 = VAR_5 & ~(VAR_4 <<
           (VAR_2 * VAR_8->chan_id));
  VAR_11 &= VAR_12;
  if (VAR_9->dir == VAR_7)
   VAR_11 |= 0x1 << (VAR_2 * VAR_8->chan_id +
           VAR_3);
  else
   VAR_11 &= ~(0x1 << (VAR_2 * VAR_8->chan_id +
      VAR_3));

  VAR_11 |= VAR_13;
  FUNC_3(VAR_10, VAR_0, VAR_11);
 } else {
  int VAR_14 = VAR_8->chan_id - 8;
  VAR_11 = FUNC_2(VAR_10, VAR_1);

  VAR_12 = VAR_4 <<
      (VAR_2 * VAR_14);
  VAR_13 = VAR_6 & ~(VAR_4 <<
       (VAR_2 * VAR_14));
  VAR_11 &= VAR_12;
  if (VAR_9->dir == VAR_7)
   VAR_11 |= 0x1 << (VAR_2 * VAR_14 +
           VAR_3);
  else
   VAR_11 &= ~(0x1 << (VAR_2 * VAR_14 +
      VAR_3));
  VAR_11 |= VAR_13;
  FUNC_3(VAR_10, VAR_1, VAR_11);
 }

 FUNC_1(FUNC_0(VAR_8), "pdc_set_dir: chan %d -> %x\n",
  VAR_8->chan_id, VAR_11);
}

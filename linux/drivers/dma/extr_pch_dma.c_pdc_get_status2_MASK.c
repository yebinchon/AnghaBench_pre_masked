
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chan_id; int device; } ;
struct pch_dma_chan {TYPE_1__ chan; } ;
struct pch_dma {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pch_dma*,int ) ;
 struct pch_dma* FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct pch_dma_chan *VAR_4)
{
 struct pch_dma *VAR_5 = FUNC_1(VAR_4->chan.device);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 return VAR_1 & (VAR_6 >> (VAR_2 +
   VAR_0 * (VAR_4->chan.chan_id - 8)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_dmae_device {scalar_t__ chan_reg; TYPE_2__* pdata; } ;
struct sh_dmae_channel {int chclr_bit; scalar_t__ chclr_offset; } ;
struct TYPE_3__ {int id; } ;
struct sh_dmae_chan {TYPE_1__ shdma_chan; } ;
struct TYPE_4__ {scalar_t__ chclr_bitwise; struct sh_dmae_channel* channel; } ;


 int FUNC_0 (int,scalar_t__) ;
 struct sh_dmae_device* FUNC_1 (struct sh_dmae_chan*) ;

__attribute__((used)) static void FUNC_2(struct sh_dmae_chan *VAR_0)
{
 struct sh_dmae_device *VAR_1 = FUNC_1(VAR_0);
 const struct sh_dmae_channel *VAR_2 = VAR_1->pdata->channel +
  VAR_0->shdma_chan.id;
 u32 VAR_3 = VAR_1->pdata->chclr_bitwise ? 1 << VAR_2->chclr_bit : 0;

 FUNC_0(VAR_3, VAR_1->chan_reg + VAR_2->chclr_offset);
}

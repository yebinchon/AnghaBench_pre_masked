
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_dmae_device {int chcr_ie_bit; TYPE_1__* pdata; } ;
struct sh_dmae_chan {int dummy; } ;
struct TYPE_2__ {scalar_t__ needs_tend_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_dmae_chan*) ;
 int FUNC_1 (struct sh_dmae_chan*,int) ;
 int FUNC_2 (struct sh_dmae_chan*,int,int ) ;
 struct sh_dmae_device* FUNC_3 (struct sh_dmae_chan*) ;

__attribute__((used)) static void FUNC_4(struct sh_dmae_chan *VAR_3)
{
 struct sh_dmae_device *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->pdata->needs_tend_set)
  FUNC_2(VAR_3, 0xFFFFFFFF, VAR_2);

 VAR_5 |= VAR_0 | VAR_4->chcr_ie_bit;
 FUNC_1(VAR_3, VAR_5 & ~VAR_1);
}

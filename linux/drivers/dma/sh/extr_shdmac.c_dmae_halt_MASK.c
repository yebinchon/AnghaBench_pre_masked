
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_device {int chcr_ie_bit; } ;
struct sh_dmae_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_dmae_chan*) ;
 int FUNC_1 (struct sh_dmae_chan*,int) ;
 struct sh_dmae_device* FUNC_2 (struct sh_dmae_chan*) ;

__attribute__((used)) static void FUNC_3(struct sh_dmae_chan *VAR_2)
{
 struct sh_dmae_device *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_2);

 VAR_4 &= ~(VAR_0 | VAR_1 | VAR_3->chcr_ie_bit);
 FUNC_1(VAR_2, VAR_4);
}

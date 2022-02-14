
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_chan {int xmit_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sh_dmae_chan*,int) ;
 int FUNC_1 (struct sh_dmae_chan*,int) ;
 int FUNC_2 (struct sh_dmae_chan*,int ) ;

__attribute__((used)) static void FUNC_3(struct sh_dmae_chan *VAR_4)
{



 u32 VAR_5 = VAR_0 | VAR_3 | VAR_2 | FUNC_2(VAR_4,
         VAR_1);
 VAR_4->xmit_shift = FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_5);
}

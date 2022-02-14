
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_chan {int xmit_shift; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_dmae_chan*,int ) ;
 int FUNC_1 (struct sh_dmae_chan*,int ) ;
 scalar_t__ FUNC_2 (struct sh_dmae_chan*) ;

__attribute__((used)) static int FUNC_3(struct sh_dmae_chan *VAR_1, u32 VAR_2)
{

 if (FUNC_2(VAR_1))
  return -VAR_0;

 VAR_1->xmit_shift = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);

 return 0;
}

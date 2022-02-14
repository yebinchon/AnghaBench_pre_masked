
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_device {scalar_t__ chcr_offset; } ;
struct sh_dmae_chan {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 struct sh_dmae_device* FUNC_1 (struct sh_dmae_chan*) ;

__attribute__((used)) static u32 FUNC_2(struct sh_dmae_chan *VAR_0)
{
 struct sh_dmae_device *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0->base + VAR_1->chcr_offset);
}

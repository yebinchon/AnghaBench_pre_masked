
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_dmae_chan*) ;

__attribute__((used)) static bool FUNC_1(struct sh_dmae_chan *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);

 if ((VAR_3 & (VAR_0 | VAR_1)) == VAR_0)
  return 1;

 return 0;
}

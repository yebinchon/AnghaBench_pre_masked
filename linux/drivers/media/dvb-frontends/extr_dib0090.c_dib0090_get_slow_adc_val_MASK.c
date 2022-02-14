
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ in_soc; } ;
struct dib0090_state {TYPE_1__ identity; } ;


 int FUNC_0 (struct dib0090_state*,int) ;

__attribute__((used)) static u32 FUNC_1(struct dib0090_state *VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0, 0x1d);
 if (VAR_0->identity.in_soc)
  VAR_1 >>= 2;
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dib7000p_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct dib7000p_state*,int) ;

__attribute__((used)) static u32 FUNC_1(struct dib7000p_state *VAR_0)
{
 u32 VAR_1 = (u32) FUNC_0(VAR_0, 18) << 16;
 VAR_1 |= (u32) FUNC_0(VAR_0, 19);
 VAR_1 /= 1000;

 return VAR_1;
}

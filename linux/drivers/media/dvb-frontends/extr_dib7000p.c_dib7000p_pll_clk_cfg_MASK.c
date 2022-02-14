
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib7000p_state *VAR_0)
{
 u16 VAR_1 = 0;
 VAR_1 = FUNC_0(VAR_0, 903);
 FUNC_1(VAR_0, 903, (VAR_1 | 0x1));
 VAR_1 = FUNC_0(VAR_0, 900);
 FUNC_1(VAR_0, 900, (VAR_1 & 0x7fff) | (1 << 6));
}

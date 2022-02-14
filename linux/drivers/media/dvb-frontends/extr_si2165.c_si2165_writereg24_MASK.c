
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct si2165_state {int dummy; } ;


 int FUNC_0 (struct si2165_state*,int const,int*,int) ;

__attribute__((used)) static int FUNC_1(struct si2165_state *VAR_0, const u16 VAR_1, u32 VAR_2)
{
 u8 VAR_3[3] = { VAR_2 & 0xff, (VAR_2 >> 8) & 0xff, (VAR_2 >> 16) & 0xff };

 return FUNC_0(VAR_0, VAR_1, VAR_3, 3);
}

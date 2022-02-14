
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stv090x_state*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct stv090x_state *VAR_4, u32 VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 s32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_7 = FUNC_0(VAR_4, VAR_2);
 VAR_8 = FUNC_0(VAR_4, VAR_1);
 VAR_9 = FUNC_0(VAR_4, VAR_0);

 VAR_10 = ((VAR_6 << 24) | (VAR_7 << 16) | (VAR_8 << 8) | VAR_9);

 VAR_11 = VAR_5 >> 16;
 VAR_12 = VAR_10 >> 16;

 VAR_13 = VAR_5 % 0x10000;
 VAR_14 = VAR_10 % 0x10000;

 VAR_10 = (VAR_11 * VAR_12) +
  ((VAR_11 * VAR_14) >> 16) +
  ((VAR_12 * VAR_13) >> 16);

 return VAR_10;
}

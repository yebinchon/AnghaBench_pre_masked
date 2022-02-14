
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib3000mc_state {int dummy; } ;
typedef int s16 ;





 int FUNC_0 (struct dib3000mc_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib3000mc_state *VAR_0, s16 VAR_1)
{
 u16 VAR_2[4] = { 0 },VAR_3;
 switch (VAR_1) {
  case 128:
   VAR_2[0] = 0x099a; VAR_2[1] = 0x7fae; VAR_2[2] = 0x0333; VAR_2[3] = 0x7ff0;
   break;
  case 130:
   VAR_2[0] = 0x023d; VAR_2[1] = 0x7fdf; VAR_2[2] = 0x00a4; VAR_2[3] = 0x7ff0;
   break;
  case 129:
   VAR_2[0] = 0x0148; VAR_2[1] = 0x7ff0; VAR_2[2] = 0x00a4; VAR_2[3] = 0x7ff8;
   break;
 }
 for (VAR_3 = 129; VAR_3 < 133; VAR_3++)
  FUNC_0(VAR_0, VAR_3, VAR_2[VAR_3 - 129]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib3000mc_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib3000mc_state*,int ,int,int ) ;
 int FUNC_1 (struct dib3000mc_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib3000mc_state *VAR_2, u32 VAR_3)
{
 u16 VAR_4[6] = { 0 };
 u16 VAR_5[3] = { 0 };
 u16 VAR_6;


 switch (VAR_3) {
  case 8000:
   VAR_4[0] = 0x0019; VAR_4[1] = 0x5c30; VAR_4[2] = 0x0054; VAR_4[3] = 0x88a0; VAR_4[4] = 0x01a6; VAR_4[5] = 0xab20;
   VAR_5[0] = 0x04db; VAR_5[1] = 0x00db; VAR_5[2] = 0x00b7;
   break;

  case 7000:
   VAR_4[0] = 0x001c; VAR_4[1] = 0xfba5; VAR_4[2] = 0x0060; VAR_4[3] = 0x9c25; VAR_4[4] = 0x01e3; VAR_4[5] = 0x0cb7;
   VAR_5[0] = 0x04c0; VAR_5[1] = 0x00c0; VAR_5[2] = 0x00a0;
   break;

  case 6000:
   VAR_4[0] = 0x0021; VAR_4[1] = 0xd040; VAR_4[2] = 0x0070; VAR_4[3] = 0xb62b; VAR_4[4] = 0x0233; VAR_4[5] = 0x8ed5;
   VAR_5[0] = 0x04a5; VAR_5[1] = 0x00a5; VAR_5[2] = 0x0089;
   break;

  case 5000:
   VAR_4[0] = 0x0028; VAR_4[1] = 0x9380; VAR_4[2] = 0x0087; VAR_4[3] = 0x4100; VAR_4[4] = 0x02a4; VAR_4[5] = 0x4500;
   VAR_5[0] = 0x0489; VAR_5[1] = 0x0089; VAR_5[2] = 0x0072;
   break;

  default: return -VAR_0;
 }

 for (VAR_6 = 6; VAR_6 < 12; VAR_6++)
  FUNC_1(VAR_2, VAR_6, VAR_4[VAR_6 - 6]);
 FUNC_1(VAR_2, 12, 0x0000);
 FUNC_1(VAR_2, 13, 0x03e8);
 FUNC_1(VAR_2, 14, 0x0000);
 FUNC_1(VAR_2, 15, 0x03f2);
 FUNC_1(VAR_2, 16, 0x0001);
 FUNC_1(VAR_2, 17, 0xb0d0);

 FUNC_1(VAR_2, 18, 0x0393);
 FUNC_1(VAR_2, 19, 0x8700);

 for (VAR_6 = 55; VAR_6 < 58; VAR_6++)
  FUNC_1(VAR_2, VAR_6, VAR_5[VAR_6 - 55]);


 FUNC_0(VAR_2, VAR_1, VAR_3, 0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda1004x_state {int dummy; } ;
typedef int bandwidth_8mhz ;
typedef int bandwidth_7mhz ;
typedef int bandwidth_6mhz ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tda1004x_state*,int ,int*,int) ;
 int FUNC_1 (struct tda1004x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tda1004x_state *VAR_3,
       u32 VAR_4)
{
 static u8 VAR_5[] = { 0x02, 0x00, 0x3d, 0x00, 0x60, 0x1e, 0xa7, 0x45, 0x4f };
 static u8 VAR_6[] = { 0x02, 0x00, 0x37, 0x00, 0x4a, 0x2f, 0x6d, 0x76, 0xdb };
 static u8 VAR_7[] = { 0x02, 0x00, 0x3d, 0x00, 0x48, 0x17, 0x89, 0xc7, 0x14 };

 switch (VAR_4) {
 case 6000000:
  FUNC_0(VAR_3, VAR_1, VAR_5, sizeof(VAR_5));
  break;

 case 7000000:
  FUNC_0(VAR_3, VAR_1, VAR_6, sizeof(VAR_6));
  break;

 case 8000000:
  FUNC_0(VAR_3, VAR_1, VAR_7, sizeof(VAR_7));
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_2, 0);

 return 0;
}

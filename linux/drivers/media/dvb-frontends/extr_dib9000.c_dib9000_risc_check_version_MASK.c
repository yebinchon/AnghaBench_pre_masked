
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dib9000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int ,int*,int*) ;
 scalar_t__ FUNC_1 (struct dib9000_state*,int ,int*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct dib9000_state *VAR_4)
{
 u8 VAR_5[4];
 u8 VAR_6;
 u16 VAR_7 = 0;

 if (FUNC_1(VAR_4, VAR_3, &VAR_7, 1) != 0)
  return -VAR_1;

 if (FUNC_0(VAR_4, VAR_2, (u16 *) VAR_5, &VAR_6) < 0)
  return -VAR_1;

 VAR_7 = (VAR_5[0] << 8) | VAR_5[1];
 FUNC_2("RISC: ver: %d.%02d (IC: %d)\n", VAR_7 >> 10, VAR_7 & 0x3ff, (VAR_5[2] << 8) | VAR_5[3]);

 if ((VAR_7 >> 10) != 7)
  return -VAR_0;

 switch (VAR_7 & 0x3ff) {
 case 11:
 case 12:
 case 14:
 case 15:
 case 16:
 case 17:
  break;
 default:
  FUNC_2("RISC: invalid firmware version");
  return -VAR_0;
 }

 FUNC_2("RISC: valid firmware version");
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dib9000_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib9000_state*,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dib9000_state *VAR_1, u8 VAR_2)
{
 u16 VAR_3;
 u16 VAR_4;
 u16 VAR_5 = 1000;

 if (VAR_2 == 1)
  VAR_3 = 16;
 else
  VAR_3 = 0;


 FUNC_1(VAR_1, 1027 + VAR_3, 0x8000);


 do {
  VAR_4 = FUNC_0(VAR_1, 1027 + VAR_3);
  FUNC_3(100);
 } while ((VAR_4 & 0x8000) && --VAR_5);

 if (VAR_4 & 0x8000) {
  FUNC_2("MBX: init ERROR, no response from RISC %c\n", 'A' + VAR_2);
  return -VAR_0;
 }
 FUNC_2("MBX: initialized\n");
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(void)
{
 unsigned char VAR_0[9];
 int VAR_1, VAR_2;

 FUNC_0(3, 0);
 FUNC_0(0, 128);

 FUNC_4(1, 0x279);

 FUNC_3(1);

 FUNC_1("Identifier: ");
 for (VAR_1 = 0; VAR_1 < 9; VAR_1++) {
  VAR_0[VAR_1] = 0;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
   int VAR_3;
   FUNC_5(250);
   FUNC_2(0x203);
   FUNC_5(250);
   VAR_3 = FUNC_2(0x203);
   FUNC_1("%02X ", VAR_3);
   VAR_3 = (VAR_3 == 0xaa) ? 1 : 0;
   VAR_0[VAR_1] |= VAR_3 << VAR_2;
  }
  FUNC_1("(%02X) ", VAR_0[VAR_1]);
 }
 FUNC_1("\n");
}

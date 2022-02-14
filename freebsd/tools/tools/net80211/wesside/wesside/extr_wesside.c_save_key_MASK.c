
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,int) ;

void FUNC_10(unsigned char *VAR_3, int VAR_4)
{
 char VAR_5[16];
 char VAR_6[64];
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_4*3 < sizeof(VAR_6));

 VAR_6[0] = 0;
 while (VAR_4--) {
  FUNC_6(VAR_5, "%.2X", *VAR_3++);
  FUNC_7(VAR_6, VAR_5);
  if (VAR_4)
   FUNC_7(VAR_6, ":");
 }

 VAR_7 = FUNC_4(VAR_0, VAR_2 | VAR_1, 0644);
 if (VAR_7 == -1)
  FUNC_2(1, "open()");

 FUNC_5("\nKey: %s\n", VAR_6);
 VAR_8 = FUNC_9(VAR_7, VAR_6, FUNC_8(VAR_6));
 if (VAR_8 == -1)
  FUNC_2(1, "write()");
 if (VAR_8 != FUNC_8(VAR_6))
  FUNC_3(1, "write %d/%d\n", VAR_8, FUNC_8(VAR_6));
 FUNC_1(VAR_7);
}

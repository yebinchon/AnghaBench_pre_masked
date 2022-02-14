
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (int,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_4, unsigned char *VAR_5)
{
 unsigned char VAR_6, VAR_7;


 VAR_7 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_7 ^ 0x80);
 FUNC_0(0xc0);

 if (FUNC_0(VAR_1) == VAR_7) {
  VAR_6 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_6 ^ 0x04);
  FUNC_0(0xc0);

  if (FUNC_0(VAR_0) == VAR_6)
   *VAR_4 = 0xfd;
  else {
   FUNC_1(VAR_0, VAR_6);
   *VAR_4 = 0xfe;
  }
 } else {
  FUNC_1(VAR_1, VAR_7);


  *VAR_4 = FUNC_0(VAR_2);
  *VAR_5 = FUNC_0(VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

void FUNC_1(const unsigned char *VAR_4, u8 VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 > 0 && (VAR_3 > 1))
  VAR_5 += 0x40 * VAR_6;
 FUNC_0(0x80 | VAR_5, VAR_1);

 while (*VAR_4 != 0 && VAR_7 < VAR_2) {
  FUNC_0(*VAR_4++, VAR_0);
  VAR_7++;
 }
}

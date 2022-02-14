
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,int,int) ;
 int FUNC_1 (unsigned char const*) ;

void FUNC_2(const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4;

 if (VAR_3 > VAR_0)
  VAR_4 = 0;
 else
  VAR_4 = (VAR_0 - FUNC_1(VAR_1))/2;

 FUNC_0(VAR_1, VAR_4, VAR_2);
}

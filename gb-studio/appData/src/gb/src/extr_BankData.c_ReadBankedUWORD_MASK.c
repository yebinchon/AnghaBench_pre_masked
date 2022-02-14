
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int FUNC_0 (int) ;

UWORD FUNC_1(UBYTE VAR_1, unsigned char *VAR_2)
{
  UWORD VAR_3;
  UBYTE VAR_4, VAR_5;
  FUNC_0(VAR_1);
  VAR_4 = *(UBYTE *)VAR_2;
  VAR_5 = *(UBYTE *)(VAR_2 + 1);
  VAR_3 = (VAR_4 * 0xFFu) + VAR_5;
  VAR_0;
  return VAR_3;
}

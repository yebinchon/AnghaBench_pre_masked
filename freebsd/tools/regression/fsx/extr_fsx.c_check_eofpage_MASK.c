
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_0 (char*,char*,unsigned int,uintptr_t,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (uintptr_t) ;

void
FUNC_3(char *VAR_3, unsigned VAR_4, char *VAR_5, int VAR_6)
{
 uintptr_t VAR_7, VAR_8;

 if (VAR_4 + VAR_6 <= (VAR_0 & ~VAR_1))
  return;






 VAR_7 = ((uintptr_t)VAR_5 + (VAR_4 & VAR_1) + VAR_6) & ~VAR_1;

 for (VAR_8 = VAR_7 + (VAR_0 & VAR_1);
      VAR_8 < VAR_7 + VAR_2;
      VAR_8++)
  if (*(char *)VAR_8) {
   FUNC_0("Mapped %s: non-zero data past EOF (0x%llx) page offset 0x%x is 0x%04x\n",
       VAR_3, VAR_0 - 1, VAR_8 & VAR_1,
       FUNC_2(VAR_8));
   FUNC_1(205);
  }
}

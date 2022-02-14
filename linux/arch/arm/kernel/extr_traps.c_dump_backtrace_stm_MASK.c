
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int,int ) ;

void FUNC_3(u32 *VAR_0, u32 VAR_1)
{
 char VAR_2[80], *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_5 = 10, VAR_4 = 0, VAR_3 = VAR_2; VAR_5 >= 0; VAR_5--) {
  if (VAR_1 & FUNC_0(VAR_5)) {
   VAR_3 += FUNC_2(VAR_3, " r%d:%08x", VAR_5, *VAR_0--);
   if (++VAR_4 == 6) {
    VAR_4 = 0;
    VAR_3 = VAR_2;
    FUNC_1("%s\n", VAR_2);
   }
  }
 }
 if (VAR_3 != VAR_2)
  FUNC_1("%s\n", VAR_2);
}

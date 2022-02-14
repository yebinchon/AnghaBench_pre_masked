
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(char *VAR_5) {
 unsigned char *VAR_6 = VAR_2--;

 for ( ; (VAR_3[*VAR_2]&(VAR_0|VAR_1)) || *VAR_2 == '.'; VAR_2++)
  if ((VAR_2[0] == 'E' || VAR_2[0] == 'e')
  && (VAR_2[1] == '-' || VAR_2[1] == '+'))
   VAR_2++;
 if (VAR_2 > VAR_6)
  FUNC_0("`%S' is a preprocessing number but an invalid %s constant\n", VAR_4,

   (char*)VAR_2-VAR_4, VAR_5);
}

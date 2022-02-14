
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned int*,int*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(unsigned int *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = " ,";
 int VAR_7 = 0;

 while (*VAR_5) {
  int VAR_8 = FUNC_1(VAR_5, VAR_6);
  if (VAR_8) {
   if (FUNC_0(VAR_5, VAR_8, VAR_4, &VAR_7))
    return -1;

   VAR_5 += VAR_8;
  }
  VAR_5 += FUNC_2(VAR_5, VAR_6);
 }
 if ((VAR_7 & VAR_3) && !(VAR_7 & VAR_2))
  *VAR_4 = (*VAR_4 & ~VAR_1) | VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MGSLPC_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(MGSLPC_INFO *VAR_2, unsigned char VAR_3)
{
 int VAR_4 = 0;

 while (FUNC_0(VAR_2, (unsigned char)(VAR_3+VAR_1)) & VAR_0) {
  FUNC_1(1);
  if (VAR_4++ == 1000)
   return 0;
 }
 return 1;
}

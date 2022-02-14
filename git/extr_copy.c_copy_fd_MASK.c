
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int,char*,int) ;

int FUNC_2(int VAR_2, int VAR_3)
{
 while (1) {
  char VAR_4[8192];
  ssize_t VAR_5 = FUNC_1(VAR_2, VAR_4, sizeof(VAR_4));
  if (!VAR_5)
   break;
  if (VAR_5 < 0)
   return VAR_0;
  if (FUNC_0(VAR_3, VAR_4, VAR_5) < 0)
   return VAR_1;
 }
 return 0;
}

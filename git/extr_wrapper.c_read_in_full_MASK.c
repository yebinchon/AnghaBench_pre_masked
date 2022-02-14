
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,char*,size_t) ;

ssize_t FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_1;
 ssize_t VAR_4 = 0;

 while (VAR_2 > 0) {
  ssize_t VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_2);
  if (VAR_5 < 0)
   return -1;
  if (VAR_5 == 0)
   return VAR_4;
  VAR_2 -= VAR_5;
  VAR_3 += VAR_5;
  VAR_4 += VAR_5;
 }

 return VAR_4;
}

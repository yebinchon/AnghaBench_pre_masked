
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char const*,size_t) ;

ssize_t FUNC_1(int VAR_2, const void *VAR_3, size_t VAR_4)
{
 const char *VAR_5 = VAR_3;
 ssize_t VAR_6 = 0;

 while (VAR_4 > 0) {
  ssize_t VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_4);
  if (VAR_7 < 0)
   return -1;
  if (!VAR_7) {
   VAR_1 = VAR_0;
   return -1;
  }
  VAR_4 -= VAR_7;
  VAR_5 += VAR_7;
  VAR_6 += VAR_7;
 }

 return VAR_6;
}

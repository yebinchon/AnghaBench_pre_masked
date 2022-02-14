
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char const*,size_t) ;

int FUNC_2(const char *VAR_1, size_t VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5 = 0;
 size_t VAR_6;

 while (!VAR_4) {
  if ((VAR_2 - VAR_5) > VAR_0)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_2 - VAR_5;
  if (VAR_6 == 0)
   break;
  VAR_4 = FUNC_1(VAR_3, VAR_1 + VAR_5, VAR_6);
  VAR_5 += VAR_6;
 }
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3);
 return VAR_4;
}

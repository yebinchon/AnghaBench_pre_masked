
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const**,int *) ;

int FUNC_3(const char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 const char *VAR_4 = VAR_0;

 if (VAR_1 == -1)
  VAR_1 = FUNC_1(VAR_0);
 while (VAR_0 && VAR_0 < VAR_4 + VAR_1) {
  int VAR_5;
  while (VAR_2 &&
         (VAR_5 = FUNC_0(VAR_0)) != 0)
   VAR_0 += VAR_5;
  VAR_3 += FUNC_2(&VAR_0, ((void*)0));
 }
 return VAR_0 ? VAR_3 : VAR_1;
}

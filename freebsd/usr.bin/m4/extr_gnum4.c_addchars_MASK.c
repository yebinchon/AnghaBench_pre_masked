
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char const*,size_t) ;
 int FUNC_2 (int,int,int *) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4, size_t VAR_5)
{
 if (VAR_5 == 0)
  return;
 while (VAR_3 + VAR_5 > VAR_2) {
  if (VAR_2 == 0)
   VAR_2 = 1024;
  else if (VAR_2 <= VAR_0/2) {
   VAR_2 *= 2;
  } else {
   FUNC_0(1, "size overflow");
  }
  VAR_1 = FUNC_2(VAR_1, VAR_2, ((void*)0));
 }
 FUNC_1(VAR_1+VAR_3, VAR_4, VAR_5);
 VAR_3 += VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char**,char*,int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(int VAR_6, char **VAR_7)
{
 int VAR_8;

 while ((VAR_8 = FUNC_0(VAR_6, VAR_7, "efpu",
      VAR_4, ((void*)0))) != -1) {
  switch (VAR_8) {
  case 'e':
   VAR_0++;
   break;
  case 'f':
   VAR_1++;
   break;
  case 'p':
   VAR_2++;
   break;
  case 'u':
   VAR_3++;
   break;
  default:
   FUNC_1();
  }
 }
 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;

 if (VAR_6 >= 1)
  FUNC_1();

 if (VAR_2 + VAR_1 + VAR_0 + VAR_3 != 1) {
  FUNC_2("Can only use one of -p (--parse), "
      "and -f (--format)");
  FUNC_1();
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, char **VAR_3)
{
 uint64_t VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = 0;
 while ((VAR_5 = FUNC_2(VAR_2, VAR_3, "s:")) != -1) {
  switch (VAR_5) {
  case 's':
   if (FUNC_1(VAR_0, &VAR_4) == -1)
    FUNC_0(1, "size:");
   break;
  case '?':
  default:
   return (2);
  }
 }

 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_8 = FUNC_3(VAR_3[VAR_6], VAR_4);
  if (VAR_8 != 0 && VAR_7 == 0)
   VAR_7 = VAR_8;
 }
 return (VAR_7);
}

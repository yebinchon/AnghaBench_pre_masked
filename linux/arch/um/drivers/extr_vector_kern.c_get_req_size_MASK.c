
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arglist*) ;
 int FUNC_1 (struct arglist*) ;
 scalar_t__ FUNC_2 (char*,int,long*) ;
 char* FUNC_3 (struct arglist*,char*) ;

__attribute__((used)) static int FUNC_4(struct arglist *VAR_2)
{
 char *VAR_3 = FUNC_3(VAR_2, "gro");
 long VAR_4;

 if (VAR_3 != ((void*)0)) {
  if (FUNC_2(VAR_3, 10, &VAR_4) == 0) {
   if (VAR_4 > 0)
    return 65536;
  }
 }
 return FUNC_1(VAR_2) + VAR_0 +
  FUNC_0(VAR_2) + VAR_1;
}

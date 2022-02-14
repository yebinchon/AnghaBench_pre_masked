
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,long*) ;
 char* FUNC_1 (struct arglist*,char*) ;

__attribute__((used)) static int FUNC_2(struct arglist *VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_1, "headroom");
 long VAR_3;

 if (VAR_2 != ((void*)0)) {
  if (FUNC_0(VAR_2, 10, &VAR_3) == 0)
   return VAR_3;
 }
 return VAR_0;
}

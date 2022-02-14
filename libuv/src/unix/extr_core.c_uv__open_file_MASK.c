
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;

FILE* FUNC_3(const char* VAR_1) {
  int VAR_2;
  FILE* VAR_3;

  VAR_2 = FUNC_2(VAR_1, VAR_0);
  if (VAR_2 < 0)
    return ((void*)0);

   VAR_3 = FUNC_0(VAR_2, "r");
   if (VAR_3 == ((void*)0))
     FUNC_1(VAR_2);

   return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid_shorten ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (size_t,char**) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char***,int *,size_t,size_t) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

void FUNC_7(void)
{


 git_oid_shorten *VAR_1;
 size_t VAR_2, VAR_3;
 int VAR_4 = 0, VAR_5;
 char **VAR_6;

 VAR_1 = FUNC_4(0);
 FUNC_0(VAR_1 != ((void*)0));




 VAR_4 = FUNC_5(&VAR_6, VAR_1, 1000, 1000);
 FUNC_0(VAR_4 > 0);






 VAR_5 = 0;
 for (VAR_2 = 0; VAR_2 < 1000; ++VAR_2) {
  for (VAR_3 = VAR_2 + 1; VAR_3 < 1000; ++VAR_3) {
   if (FUNC_6(VAR_6[VAR_2], VAR_6[VAR_3], VAR_4 - 1) == 0)
    VAR_5 = 1;
  }
 }
 FUNC_1(1, VAR_5);






 VAR_5 = 0;
 for (VAR_2 = 0; VAR_2 < 1000; ++VAR_2) {
  for (VAR_3 = VAR_2 + 1; VAR_3 < 1000; ++VAR_3) {
   if (FUNC_6(VAR_6[VAR_2], VAR_6[VAR_3], VAR_4) == 0)
    VAR_5 = 1;
  }
 }
 FUNC_1(0, VAR_5);


 FUNC_2(1000, VAR_6);
 FUNC_3(VAR_1);


}

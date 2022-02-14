
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,long,int,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 char* FUNC_6 (long) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4;
 long VAR_5;

 if (!VAR_2 || !*VAR_2)
  return ((void*)0);

 FUNC_0((VAR_3 = FUNC_2(VAR_2, "r")) != ((void*)0));
 FUNC_0(FUNC_4(VAR_3, 0, VAR_0) != -1);
 FUNC_0((VAR_5 = FUNC_5(VAR_3)) != -1);
 FUNC_0(FUNC_4(VAR_3, 0, VAR_1) != -1);
 FUNC_0((VAR_4 = FUNC_6(VAR_5)) != ((void*)0));
 FUNC_0(FUNC_3(VAR_4, VAR_5, 1, VAR_3) == 1);
 FUNC_1(VAR_3);

 return VAR_4;
}

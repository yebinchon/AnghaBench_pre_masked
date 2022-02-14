
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char const*,char*,int) ;

void FUNC_6(void)
{
 const char *VAR_1 = "16a0123456789abcdef4b775213c23a8bd74f5e0";
 git_oid VAR_2;
 char VAR_3[VAR_0 + 1];
 char *VAR_4;
 int VAR_5;

 FUNC_2(FUNC_3(&VAR_2, VAR_1));


 VAR_4 = FUNC_4(((void*)0), sizeof(VAR_3), &VAR_2);
 FUNC_0(VAR_4 && *VAR_4 == '\0' && VAR_4 != VAR_3);


 VAR_4 = FUNC_4(VAR_3, 0, &VAR_2);
 FUNC_0(VAR_4 && *VAR_4 == '\0' && VAR_4 != VAR_3);


 VAR_4 = FUNC_4(VAR_3, sizeof(VAR_3), ((void*)0));
 FUNC_0(VAR_4 && *VAR_4 == '\0' && VAR_4 == VAR_3);


 VAR_4 = FUNC_4(VAR_3, 1, &VAR_2);
 FUNC_0(VAR_4 && *VAR_4 == '\0' && VAR_4 == VAR_3);

 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
  VAR_3[VAR_5+1] = 'Z';
  VAR_4 = FUNC_4(VAR_3, VAR_5+1, &VAR_2);

  FUNC_0(VAR_4 && VAR_4 == VAR_3);

  FUNC_0(*(VAR_4+VAR_5) == '\0');

  FUNC_0(*(VAR_4+(VAR_5+1)) == 'Z');

  FUNC_2(FUNC_5(VAR_1, VAR_3, VAR_5));
 }


 VAR_4 = FUNC_4(VAR_3, sizeof(VAR_3), &VAR_2);
 FUNC_0(VAR_4 && VAR_4 == VAR_3 && *(VAR_4+VAR_0) == '\0');
 FUNC_1(VAR_1, VAR_3);
}

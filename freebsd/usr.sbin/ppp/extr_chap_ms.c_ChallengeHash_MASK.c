
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA_CTX ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(char *VAR_1, char *VAR_2,
              char *VAR_3, char *VAR_4)
{
  SHA_CTX VAR_5;
  char VAR_6[VAR_0];
  char *VAR_7;

  VAR_7 = FUNC_5(VAR_3, '\\');
  if(((void*)0) == VAR_7)
    VAR_7 = VAR_3;
  else
    VAR_7++;

  FUNC_1(&VAR_5);

  FUNC_2(&VAR_5, VAR_1, 16);
  FUNC_2(&VAR_5, VAR_2, 16);
  FUNC_2(&VAR_5, VAR_7, FUNC_4(VAR_7));

  FUNC_0(VAR_6, &VAR_5);
  FUNC_3(VAR_4, VAR_6, 8);
}

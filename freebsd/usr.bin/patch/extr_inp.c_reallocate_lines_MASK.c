
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int ) ;
 char** FUNC_2 (char**,size_t,int) ;

__attribute__((used)) static bool
FUNC_3(size_t *VAR_3)
{
 char **VAR_4;
 size_t VAR_5;

 VAR_5 = *VAR_3 * 3 / 2;
 VAR_4 = FUNC_2(VAR_0, VAR_5 + 2, sizeof(char *));
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, VAR_1);
  VAR_2 = ((void*)0);
  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
  *VAR_3 = 0;
  return 0;
 }
 *VAR_3 = VAR_5;
 VAR_0 = VAR_4;
 return 1;
}

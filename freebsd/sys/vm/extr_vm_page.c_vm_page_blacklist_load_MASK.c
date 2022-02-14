
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef char u_char ;


 char* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char **VAR_0, char **VAR_1)
{
 void *VAR_2;
 u_char *VAR_3;
 u_int VAR_4;

 VAR_2 = ((void*)0);
 VAR_3 = ((void*)0);

 VAR_2 = FUNC_2("ram_blacklist");
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2);
  VAR_4 = FUNC_1(VAR_2);
        }
 *VAR_0 = VAR_3;
 if (VAR_3 != ((void*)0))
  *VAR_1 = VAR_3 + VAR_4;
 else
  *VAR_1 = ((void*)0);
 return;
}

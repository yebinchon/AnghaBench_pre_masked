
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
typedef int nvram_handle_t ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(nvram_handle_t *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_4(VAR_1, "=");
 char VAR_3[FUNC_2(VAR_1)];
 int VAR_4 = 1;

 if( VAR_2 != ((void*)0) )
 {
  FUNC_0(VAR_3, 0, sizeof(VAR_3));
  FUNC_3(VAR_3, VAR_1, (int)(VAR_2-VAR_1));
  VAR_4 = FUNC_1(VAR_0, VAR_3, (char *)(VAR_2 + 1));
 }

 return VAR_4;
}

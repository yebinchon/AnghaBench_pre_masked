
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvram_handle_t ;


 char* FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(nvram_handle_t *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 int VAR_3 = 1;

 if( (VAR_2 = FUNC_0(VAR_0, VAR_1)) != ((void*)0) )
 {
  FUNC_1("%s\n", VAR_2);
  VAR_3 = 0;
 }

 return VAR_3;
}

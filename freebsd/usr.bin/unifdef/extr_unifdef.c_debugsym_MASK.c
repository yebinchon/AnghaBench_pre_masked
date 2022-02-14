
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int ,char,char*) ;
 int * VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_2, int VAR_3)
{
 FUNC_0("%s %s%c%s", VAR_2, VAR_0[VAR_3],
     VAR_1[VAR_3] ? '=' : ' ',
     VAR_1[VAR_3] ? VAR_1[VAR_3] : "undef");
}

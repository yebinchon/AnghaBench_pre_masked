
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int VAR_2 ;
 int FUNC_3 (char const*,char const*,int,int,int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, const char **VAR_4)
{
 const char **VAR_5;
 size_t VAR_6 = FUNC_4(VAR_3) + 1;

 VAR_2 = FUNC_2(VAR_3);

 for (VAR_5 = VAR_4; *VAR_5 != ((void*)0); ++VAR_5) {
  FUNC_1(FUNC_3(
   *VAR_5 + VAR_6, VAR_3,
   0777, VAR_0 | VAR_1, ((void*)0)));
  FUNC_0(*VAR_5, "contents");
 }
}

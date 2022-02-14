
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int user_name ;
struct passwd {char* pw_name; char* pw_gecos; int * pw_dir; } ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 struct passwd* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;

struct passwd *FUNC_5(int VAR_1)
{
 static unsigned VAR_2;
 static char VAR_3[100];
 static struct passwd *VAR_4;
 wchar_t VAR_5[100];
 DWORD VAR_6;

 if (VAR_2)
  return VAR_4;

 VAR_6 = FUNC_0(VAR_5);
 if (!FUNC_1(VAR_5, &VAR_6)) {
  VAR_2 = 1;
  return ((void*)0);
 }

 if (FUNC_4(VAR_3, VAR_5, sizeof(VAR_3)) < 0) {
  VAR_2 = 1;
  return ((void*)0);
 }

 VAR_4 = FUNC_3(sizeof(*VAR_4));
 VAR_4->pw_name = VAR_3;
 VAR_4->pw_gecos = FUNC_2(VAR_0);
 if (!VAR_4->pw_gecos)
  VAR_4->pw_gecos = "unknown";
 VAR_4->pw_dir = ((void*)0);

 VAR_2 = 1;
 return VAR_4;
}

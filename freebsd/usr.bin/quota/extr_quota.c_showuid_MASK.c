
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct passwd {char* pw_name; } ;


 int VAR_0 ;
 struct passwd* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_2(u_long VAR_1)
{
 struct passwd *VAR_2 = FUNC_0(VAR_1);
 const char *VAR_3;

 if (VAR_2 == ((void*)0))
  VAR_3 = "(no account)";
 else
  VAR_3 = VAR_2->pw_name;
 return(FUNC_1(VAR_0, VAR_1, VAR_3));
}

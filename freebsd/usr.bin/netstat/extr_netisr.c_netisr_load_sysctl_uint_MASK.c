
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int ;


 scalar_t__ FUNC_0 (char const*,int *,size_t*,int *,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, u_int *VAR_1)
{
 size_t VAR_2;

 VAR_2 = sizeof(u_int);
 if (FUNC_0(VAR_0, VAR_1, &VAR_2, ((void*)0), 0) < 0)
  FUNC_1(-1, "%s", VAR_0);
 if (VAR_2 != sizeof(u_int))
  FUNC_2(-1, "%s: invalid len %ju", VAR_0, (uintmax_t)VAR_2);
}

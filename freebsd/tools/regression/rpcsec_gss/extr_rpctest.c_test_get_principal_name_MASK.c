
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rpc_gss_principal_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, const char **VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4, *VAR_5;
 rpc_gss_principal_t VAR_6;

 if (VAR_0 < 3 || VAR_0 > 5) {
  FUNC_3("usage: rpctest principal <mechname> <name> "
      "[<node> [<domain>] ]\n");
  FUNC_0(1);
 }

 VAR_2 = VAR_1[1];
 VAR_3 = VAR_1[2];
 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 if (VAR_0 > 3) {
  VAR_4 = VAR_1[3];
  if (VAR_0 > 4)
   VAR_5 = VAR_1[4];
 }

 if (FUNC_4(&VAR_6, VAR_2, VAR_3,
  VAR_4, VAR_5)) {
  FUNC_3("succeeded:\n");
  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
 } else {
  FUNC_3("failed\n");
 }
}

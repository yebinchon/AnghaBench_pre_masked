
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int SVCXPRT ;


 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (char*,size_t,char*,scalar_t__) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_3(SVCXPRT *VAR_0, char *VAR_1, size_t VAR_2)
{
 uid_t VAR_3;

 if (FUNC_0(VAR_0, &VAR_3) < 0)
                FUNC_2(VAR_1, "unknown", VAR_2);
 else if (VAR_3 == 0)
  FUNC_2(VAR_1, "superuser", VAR_2);
 else
  FUNC_1(VAR_1, VAR_2, "%d", VAR_3);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct cred {scalar_t__ cr_ruid; scalar_t__ cr_euid; scalar_t__ cr_svuid; scalar_t__ cr_issetugid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct cred *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0->cr_ruid, VAR_0->cr_euid, VAR_0->cr_svuid);
 if (VAR_1)
  return (VAR_1);

 VAR_1 = FUNC_5(VAR_0->cr_issetugid);
 if (VAR_1) {
  FUNC_3("__setugid");
  return (VAR_1);
 }
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {int member_1; int member_0; } ;
typedef int domainname ;
typedef int clnt_res ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int ,struct timeval) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool_t *
FUNC_2(domainname *VAR_4, CLIENT *VAR_5)
{
 static bool_t VAR_6;
 struct timeval VAR_7 = { 0, 0 };

 FUNC_1((char *)&VAR_6, 0, sizeof (VAR_6));
 if (FUNC_0(VAR_5, VAR_1,
  (xdrproc_t) VAR_3, (caddr_t) VAR_4,
  (xdrproc_t) VAR_2, (caddr_t) &VAR_6,
  VAR_7) != VAR_0) {
  return (((void*)0));
 }
 return (&VAR_6);
}

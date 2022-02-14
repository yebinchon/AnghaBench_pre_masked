
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct svc_req {int dummy; } ;
typedef int nlm4_testres ;
typedef int nlm4_testargs ;
typedef int bool_t ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,struct svc_req*,int **) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_2 ;

bool_t
FUNC_4(nlm4_testargs *VAR_3, void *VAR_4, struct svc_req *VAR_5)
{
 nlm4_testres VAR_6;
 CLIENT *VAR_7;
 char VAR_8;

 if (FUNC_2(VAR_3, &VAR_6, VAR_5, &VAR_7))
  return (VAR_0);
 if (VAR_7) {
  FUNC_1(&VAR_6, &VAR_8, VAR_7, ((void*)0), VAR_1);
  FUNC_0(VAR_7);
 }
 FUNC_3((xdrproc_t) VAR_2, &VAR_6);

 return (VAR_0);
}

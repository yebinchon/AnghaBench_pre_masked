
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_req {int dummy; } ;
typedef int nlm_res ;
typedef int nlm4_res ;
typedef int bool_t ;


 int FUNC_0 (int *,void*,struct svc_req*) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(nlm_res *VAR_0, void *VAR_1, struct svc_req *VAR_2)
{
 nlm4_res VAR_3;

 FUNC_1(&VAR_3, VAR_0);
 return (FUNC_0(&VAR_3, VAR_1, VAR_2));
}

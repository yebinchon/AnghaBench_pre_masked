
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {int dummy; } ;
struct od_policy_dbs_info {struct policy_dbs_info policy_dbs; } ;


 int VAR_0 ;
 struct od_policy_dbs_info* FUNC_0 (int,int ) ;

__attribute__((used)) static struct policy_dbs_info *FUNC_1(void)
{
 struct od_policy_dbs_info *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 return VAR_1 ? &VAR_1->policy_dbs : ((void*)0);
}

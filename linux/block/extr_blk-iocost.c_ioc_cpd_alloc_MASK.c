
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcg_policy_data {int dummy; } ;
struct ioc_cgrp {struct blkcg_policy_data cpd; int dfl_weight; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct ioc_cgrp* FUNC_0 (int,int ) ;

__attribute__((used)) static struct blkcg_policy_data *FUNC_1(gfp_t VAR_1)
{
 struct ioc_cgrp *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct ioc_cgrp), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->dfl_weight = VAR_0;
 return &VAR_2->cpd;
}

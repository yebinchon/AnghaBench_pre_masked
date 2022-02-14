
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_policy_node {void* priv; } ;



void *FUNC_0(struct stp_policy_node *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return VAR_0->priv;
}

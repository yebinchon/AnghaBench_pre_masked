
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_policy_node {unsigned int first_master; unsigned int last_master; unsigned int first_channel; unsigned int last_channel; } ;



void FUNC_0(struct stp_policy_node *VAR_0,
    unsigned int *VAR_1, unsigned int *VAR_2,
    unsigned int *VAR_3, unsigned int *VAR_4)
{
 *VAR_1 = VAR_0->first_master;
 *VAR_2 = VAR_0->last_master;
 *VAR_3 = VAR_0->first_channel;
 *VAR_4 = VAR_0->last_channel;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcg {int dummy; } ;
struct bfq_group {int dummy; } ;
struct bfq_data {struct bfq_group* root_group; } ;



struct bfq_group *FUNC_0(struct bfq_data *VAR_0, struct blkcg *VAR_1)
{
 return VAR_0->root_group;
}

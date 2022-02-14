
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_policy_node {int first_channel; int last_channel; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int) ;
 struct stp_policy_node* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 struct stp_policy_node *VAR_2 = FUNC_1(VAR_0);
 ssize_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, "%u %u\n", VAR_2->first_channel,
   VAR_2->last_channel);

 return VAR_3;
}

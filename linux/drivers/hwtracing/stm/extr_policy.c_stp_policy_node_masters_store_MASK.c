
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stp_policy_node {unsigned int first_master; unsigned int last_master; TYPE_1__* policy; } ;
struct stm_device {TYPE_2__* data; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {int su_mutex; } ;
struct TYPE_5__ {unsigned int sw_start; unsigned int sw_end; } ;
struct TYPE_4__ {struct stm_device* stm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,unsigned int*,unsigned int*) ;
 TYPE_3__ VAR_3 ;
 struct stp_policy_node* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct config_item *VAR_4, const char *VAR_5,
         size_t VAR_6)
{
 struct stp_policy_node *VAR_7 = FUNC_3(VAR_4);
 unsigned int VAR_8, VAR_9;
 struct stm_device *VAR_10;
 char *VAR_11 = (char *)VAR_5;
 ssize_t VAR_12 = -VAR_1;

 if (FUNC_2(VAR_11, "%u %u", &VAR_8, &VAR_9) != 2)
  return -VAR_0;

 FUNC_0(&VAR_3.su_mutex);
 VAR_10 = VAR_7->policy->stm;
 if (!VAR_10)
  goto unlock;


 if (VAR_8 > VAR_9 || VAR_8 < VAR_10->data->sw_start ||
     VAR_9 > VAR_10->data->sw_end) {
  VAR_12 = -VAR_2;
  goto unlock;
 }

 VAR_12 = VAR_6;
 VAR_7->first_master = VAR_8;
 VAR_7->last_master = VAR_9;

unlock:
 FUNC_1(&VAR_3.su_mutex);

 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stp_policy_node {unsigned int first_channel; unsigned int last_channel; TYPE_1__* policy; } ;
struct stm_device {TYPE_2__* data; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {int su_mutex; } ;
struct TYPE_5__ {unsigned int sw_nchannels; } ;
struct TYPE_4__ {struct stm_device* stm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,unsigned int*,unsigned int*) ;
 TYPE_3__ VAR_4 ;
 struct stp_policy_node* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct config_item *VAR_5, const char *VAR_6,
          size_t VAR_7)
{
 struct stp_policy_node *VAR_8 = FUNC_3(VAR_5);
 unsigned int VAR_9, VAR_10;
 struct stm_device *VAR_11;
 char *VAR_12 = (char *)VAR_6;
 ssize_t VAR_13 = -VAR_1;

 if (FUNC_2(VAR_12, "%u %u", &VAR_9, &VAR_10) != 2)
  return -VAR_0;

 FUNC_0(&VAR_4.su_mutex);
 VAR_11 = VAR_8->policy->stm;
 if (!VAR_11)
  goto unlock;

 if (VAR_9 > VAR_3 || VAR_10 > VAR_3 || VAR_9 > VAR_10 ||
     VAR_10 >= VAR_11->data->sw_nchannels) {
  VAR_13 = -VAR_2;
  goto unlock;
 }

 VAR_13 = VAR_7;
 VAR_8->first_channel = VAR_9;
 VAR_8->last_channel = VAR_10;

unlock:
 FUNC_1(&VAR_4.su_mutex);

 return VAR_13;
}

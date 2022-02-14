
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_protocol_driver {int dummy; } ;
struct stm_device {int policy_mutex; TYPE_1__* policy; struct config_item_type const* pdrv_node_type; struct stm_protocol_driver const* pdrv; } ;
struct config_item_type {int dummy; } ;
struct config_group {int dummy; } ;
struct TYPE_2__ {struct config_group group; struct stm_device* stm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct config_group*) ;
 int FUNC_2 (struct config_group*,char const*,int *) ;
 char* FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct stm_device* FUNC_8 (char*) ;
 int FUNC_9 (char*,struct stm_protocol_driver const**,struct config_item_type const**) ;
 int FUNC_10 (struct stm_device*) ;
 int FUNC_11 (struct stm_protocol_driver const*) ;
 int VAR_5 ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static struct config_group *
FUNC_13(struct config_group *VAR_6, const char *VAR_7)
{
 const struct config_item_type *VAR_8;
 const struct stm_protocol_driver *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 struct config_group *VAR_13;
 struct stm_device *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_3(VAR_4, "%s", VAR_7);
 if (!VAR_10)
  return FUNC_0(-VAR_3);
 VAR_12 = FUNC_12(VAR_10, '.');
 if (!VAR_12) {
  FUNC_4(VAR_10);
  return FUNC_0(-VAR_1);
 }

 *VAR_12 = '\0';






 VAR_11 = FUNC_12(VAR_10, ':');
 if (VAR_11)
  *VAR_11++ = '\0';

 VAR_14 = FUNC_8(VAR_10);
 if (!VAR_14) {
  FUNC_4(VAR_10);
  return FUNC_0(-VAR_2);
 }

 VAR_15 = FUNC_9(VAR_11, &VAR_9, &VAR_8);
 FUNC_4(VAR_10);

 if (VAR_15) {
  FUNC_10(VAR_14);
  return FUNC_0(-VAR_2);
 }

 FUNC_6(&VAR_14->policy_mutex);
 if (VAR_14->policy) {
  VAR_13 = FUNC_0(-VAR_0);
  goto unlock_policy;
 }

 VAR_14->policy = FUNC_5(sizeof(*VAR_14->policy), VAR_4);
 if (!VAR_14->policy) {
  VAR_13 = FUNC_0(-VAR_3);
  goto unlock_policy;
 }

 FUNC_2(&VAR_14->policy->group, VAR_7,
        &VAR_5);

 VAR_14->pdrv = VAR_9;
 VAR_14->pdrv_node_type = VAR_8;
 VAR_14->policy->stm = VAR_14;
 VAR_13 = &VAR_14->policy->group;

unlock_policy:
 FUNC_7(&VAR_14->policy_mutex);

 if (FUNC_1(VAR_13)) {




  FUNC_11(VAR_9);
  FUNC_10(VAR_14);
 }

 return VAR_13;
}

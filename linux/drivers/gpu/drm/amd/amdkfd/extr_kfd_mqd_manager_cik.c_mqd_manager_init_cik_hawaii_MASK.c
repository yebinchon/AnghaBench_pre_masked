
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqd_manager {int update_mqd; } ;
struct kfd_dev {int dummy; } ;
typedef enum KFD_MQD_TYPE { ____Placeholder_KFD_MQD_TYPE } KFD_MQD_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 struct mqd_manager* FUNC_0 (int,struct kfd_dev*) ;
 int VAR_2 ;

struct mqd_manager *FUNC_1(enum KFD_MQD_TYPE VAR_3,
   struct kfd_dev *VAR_4)
{
 struct mqd_manager *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);
 if ((VAR_3 == VAR_1) || (VAR_3 == VAR_0))
  VAR_5->update_mqd = VAR_2;
 return VAR_5;
}

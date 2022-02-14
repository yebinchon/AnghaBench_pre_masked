
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_properties {int dummy; } ;
struct kfd_mem_obj {int dummy; } ;
struct kfd_dev {int dummy; } ;
struct cik_mqd {int dummy; } ;


 scalar_t__ FUNC_0 (struct kfd_dev*,int,struct kfd_mem_obj**) ;

__attribute__((used)) static struct kfd_mem_obj *FUNC_1(struct kfd_dev *VAR_0,
     struct queue_properties *VAR_1)
{
 struct kfd_mem_obj *VAR_2;

 if (FUNC_0(VAR_0, sizeof(struct cik_mqd),
   &VAR_2))
  return ((void*)0);

 return VAR_2;
}

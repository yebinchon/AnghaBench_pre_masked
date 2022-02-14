
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqd_manager {struct kfd_dev* dev; } ;
struct kfd_mem_obj {scalar_t__ gtt_mem; } ;
struct kfd_dev {int kgd; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct kfd_dev*,struct kfd_mem_obj*) ;
 int FUNC_2 (struct kfd_mem_obj*) ;

__attribute__((used)) static void FUNC_3(struct mqd_manager *VAR_0, void *VAR_1,
   struct kfd_mem_obj *VAR_2)
{
 struct kfd_dev *VAR_3 = VAR_0->dev;

 if (VAR_2->gtt_mem) {
  FUNC_0(VAR_3->kgd, VAR_2->gtt_mem);
  FUNC_2(VAR_2);
 } else {
  FUNC_1(VAR_0->dev, VAR_2);
 }
}

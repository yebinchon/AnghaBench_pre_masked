
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_mem {int dummy; } ;
struct kfd_process_device {int vm; struct kfd_dev* dev; } ;
struct kfd_dev {int kgd; } ;


 int FUNC_0 (int ,struct kgd_mem*) ;
 int FUNC_1 (int ,struct kgd_mem*,int ) ;

__attribute__((used)) static void FUNC_2(struct kgd_mem *VAR_0,
   struct kfd_process_device *VAR_1)
{
 struct kfd_dev *VAR_2 = VAR_1->dev;

 FUNC_1(VAR_2->kgd, VAR_0, VAR_1->vm);
 FUNC_0(VAR_2->kgd, VAR_0);
}

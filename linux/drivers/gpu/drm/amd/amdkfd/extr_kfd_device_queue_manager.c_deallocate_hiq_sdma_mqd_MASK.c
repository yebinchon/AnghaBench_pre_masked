
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_mem_obj {int gtt_mem; } ;
struct kfd_dev {int kgd; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kfd_dev *VAR_0,
        struct kfd_mem_obj *VAR_1)
{
 FUNC_0(!VAR_1, "No hiq sdma mqd trunk to free");

 FUNC_1(VAR_0->kgd, VAR_1->gtt_mem);
}

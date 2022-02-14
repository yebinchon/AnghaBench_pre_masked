
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int gtt_sa_bitmap; int gtt_sa_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct kfd_dev *VAR_0)
{
 FUNC_1(&VAR_0->gtt_sa_lock);
 FUNC_0(VAR_0->gtt_sa_bitmap);
}

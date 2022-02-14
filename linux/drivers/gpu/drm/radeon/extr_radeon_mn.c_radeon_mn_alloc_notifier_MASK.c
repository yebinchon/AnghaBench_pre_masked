
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier {int dummy; } ;
struct radeon_mn {struct mmu_notifier mn; int objects; int lock; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 struct mmu_notifier* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct radeon_mn* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mmu_notifier *FUNC_3(struct mm_struct *VAR_3)
{
 struct radeon_mn *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_4->lock);
 VAR_4->objects = VAR_2;
 return &VAR_4->mn;
}

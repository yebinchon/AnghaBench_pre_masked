
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int pasid; struct device_state* device_state; } ;
struct mmu_notifier {int dummy; } ;
struct mm_struct {int dummy; } ;
struct device_state {int domain; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (int ,int ) ;
 struct pasid_state* FUNC_2 (struct mmu_notifier*) ;

__attribute__((used)) static void FUNC_3(struct mmu_notifier *VAR_1,
    struct mm_struct *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 struct pasid_state *VAR_5;
 struct device_state *VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 VAR_6 = VAR_5->device_state;

 if ((VAR_3 ^ (VAR_4 - 1)) < VAR_0)
  FUNC_0(VAR_6->domain, VAR_5->pasid,
         VAR_3);
 else
  FUNC_1(VAR_6->domain, VAR_5->pasid);
}

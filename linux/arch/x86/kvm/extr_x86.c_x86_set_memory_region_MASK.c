
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm {int slots_lock; } ;
typedef int gpa_t ;


 int FUNC_0 (struct kvm*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm *VAR_0, int VAR_1, gpa_t VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->slots_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->slots_lock);

 return VAR_4;
}

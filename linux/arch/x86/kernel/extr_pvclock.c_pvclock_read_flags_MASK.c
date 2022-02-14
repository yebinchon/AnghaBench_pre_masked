
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pvclock_vcpu_time_info {int flags; } ;


 unsigned int FUNC_0 (struct pvclock_vcpu_time_info*) ;
 scalar_t__ FUNC_1 (struct pvclock_vcpu_time_info*,unsigned int) ;
 int VAR_0 ;

u8 FUNC_2(struct pvclock_vcpu_time_info *VAR_1)
{
 unsigned VAR_2;
 u8 VAR_3;

 do {
  VAR_2 = FUNC_0(VAR_1);
  VAR_3 = VAR_1->flags;
 } while (FUNC_1(VAR_1, VAR_2));

 return VAR_3 & VAR_0;
}

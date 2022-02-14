
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct pvclock_vcpu_time_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pvclock_vcpu_time_info*,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 unsigned int FUNC_3 (struct pvclock_vcpu_time_info*) ;
 scalar_t__ FUNC_4 (struct pvclock_vcpu_time_info*,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_3 ;

u64 FUNC_8(struct pvclock_vcpu_time_info *VAR_4)
{
 unsigned VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 u8 VAR_8;

 do {
  VAR_5 = FUNC_3(VAR_4);
  VAR_6 = FUNC_0(VAR_4, FUNC_6());
  VAR_8 = VAR_4->flags;
 } while (FUNC_4(VAR_4, VAR_5));

 if (FUNC_7((VAR_8 & VAR_0) != 0)) {
  VAR_4->flags &= ~VAR_0;
  FUNC_5();
 }

 if ((VAR_3 & VAR_1) &&
  (VAR_8 & VAR_1))
  return VAR_6;
 VAR_7 = FUNC_2(&VAR_2);
 do {
  if (VAR_6 < VAR_7)
   return VAR_7;
  VAR_7 = FUNC_1(&VAR_2, VAR_7, VAR_6);
 } while (FUNC_7(VAR_7 != VAR_6));

 return VAR_6;
}

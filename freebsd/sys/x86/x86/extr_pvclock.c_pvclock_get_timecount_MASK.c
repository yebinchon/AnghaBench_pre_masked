
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct pvclock_vcpu_time_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct pvclock_vcpu_time_info*,scalar_t__*,int*) ;

uint64_t
FUNC_3(struct pvclock_vcpu_time_info *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 uint8_t VAR_5;

 FUNC_2(VAR_2, &VAR_3, &VAR_5);

 if (VAR_5 & VAR_0)
  return (VAR_3);






 do {
  VAR_4 = FUNC_1(&VAR_1);
  if (VAR_4 > VAR_3)
   return (VAR_4);
 } while (!FUNC_0(&VAR_1, VAR_4, VAR_3));

 return (VAR_3);
}

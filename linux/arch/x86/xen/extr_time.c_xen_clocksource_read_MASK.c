
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pvclock_vcpu_time_info {int dummy; } ;
struct TYPE_2__ {struct pvclock_vcpu_time_info time; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pvclock_vcpu_time_info*) ;
 int VAR_0 ;

__attribute__((used)) static u64 FUNC_4(void)
{
        struct pvclock_vcpu_time_info *VAR_1;
 u64 VAR_2;

 FUNC_1();
 VAR_1 = &FUNC_0(VAR_0)->time;
 VAR_2 = FUNC_3(VAR_1);
 FUNC_2();
 return VAR_2;
}

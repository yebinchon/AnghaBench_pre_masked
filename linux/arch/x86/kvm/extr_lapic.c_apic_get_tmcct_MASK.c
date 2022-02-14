
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int period; int target_expiration; } ;
struct kvm_lapic {int divide_count; TYPE_1__ lapic_timer; } ;
typedef int s64 ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct kvm_lapic*,int ) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static u32 FUNC_7(struct kvm_lapic *VAR_2)
{
 ktime_t VAR_3, VAR_4;
 s64 VAR_5;
 u32 VAR_6;

 FUNC_0(VAR_2 != ((void*)0));


 if (FUNC_5(VAR_2, VAR_1) == 0 ||
  VAR_2->lapic_timer.period == 0)
  return 0;

 VAR_4 = FUNC_2();
 VAR_3 = FUNC_3(VAR_2->lapic_timer.target_expiration, VAR_4);
 if (FUNC_4(VAR_3) < 0)
  VAR_3 = 0;

 VAR_5 = FUNC_6(FUNC_4(VAR_3), VAR_2->lapic_timer.period);
 VAR_6 = FUNC_1(VAR_5,
    (VAR_0 * VAR_2->divide_count));

 return VAR_6;
}

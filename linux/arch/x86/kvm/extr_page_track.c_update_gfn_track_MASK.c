
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int** gfn_track; } ;
struct kvm_memory_slot {TYPE_1__ arch; int base_gfn; } ;
typedef int gfn_t ;
typedef enum kvm_page_track_mode { ____Placeholder_kvm_page_track_mode } kvm_page_track_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_memory_slot *VAR_2, gfn_t VAR_3,
        enum kvm_page_track_mode VAR_4, short VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_2->base_gfn, VAR_0);

 VAR_7 = VAR_2->arch.gfn_track[VAR_4][VAR_6];

 if (FUNC_0(VAR_7 + VAR_5 < 0 || VAR_7 + VAR_5 > VAR_1))
  return;

 VAR_2->arch.gfn_track[VAR_4][VAR_6] += VAR_5;
}

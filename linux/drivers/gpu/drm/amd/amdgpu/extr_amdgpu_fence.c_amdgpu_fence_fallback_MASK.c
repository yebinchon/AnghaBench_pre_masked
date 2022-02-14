
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct amdgpu_ring {int name; } ;
struct TYPE_2__ {int fallback_timer; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_ring*) ;
 TYPE_1__ VAR_0 ;
 struct amdgpu_ring* FUNC_2 (int ,struct timer_list*,int ) ;
 struct amdgpu_ring* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct amdgpu_ring *VAR_3 = FUNC_2(VAR_3, VAR_2,
           VAR_0.fallback_timer);

 if (FUNC_1(VAR_3))
  FUNC_0("Fence fallback timer expired on ring %s\n", VAR_3->name);
}

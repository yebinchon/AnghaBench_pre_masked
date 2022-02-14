
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {TYPE_2__* channels; int lock; } ;
struct kvm_pit {TYPE_1__ pit_state; } ;
struct TYPE_4__ {int mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_pit*,int,int ) ;

void FUNC_4(struct kvm_pit *VAR_0, int VAR_1, u32 VAR_2,
  int VAR_3)
{
 u8 VAR_4;

 FUNC_1(!FUNC_2(&VAR_0->pit_state.lock));

 if (VAR_3) {

  FUNC_0(VAR_1 != 0);
  VAR_4 = VAR_0->pit_state.channels[0].mode;
  VAR_0->pit_state.channels[0].mode = 0xff;
  FUNC_3(VAR_0, VAR_1, VAR_2);
  VAR_0->pit_state.channels[0].mode = VAR_4;
 } else {
  FUNC_3(VAR_0, VAR_1, VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct decr_state {int mode; scalar_t__ div; } ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;


 struct decr_state* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct trapframe *VAR_7)
{
 struct decr_state *VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = 0;
 int32_t VAR_10;

 if (!VAR_6)
  return;

 (*VAR_3[VAR_2])++;
 if (VAR_8->mode == 1) {




  __asm ("mfdec %0" : "=r"(VAR_10));
  while (VAR_10 < 0) {
   VAR_10 += VAR_8->div;
   VAR_9++;
  }
  FUNC_2(VAR_10);
 } else if (VAR_8->mode == 2) {
  VAR_9 = 1;
  FUNC_1(((void*)0));
 } else if (VAR_8->mode == 0) {

  FUNC_1(((void*)0));
 }

 while (VAR_9-- > 0) {
  if (VAR_4.et_active)
   VAR_4.et_event_cb(&VAR_4, VAR_4.et_arg);
 }
}

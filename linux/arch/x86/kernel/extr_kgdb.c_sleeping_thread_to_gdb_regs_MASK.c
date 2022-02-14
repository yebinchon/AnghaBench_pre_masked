
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {unsigned long sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct inactive_task_frame {unsigned long bp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;

void FUNC_0(unsigned long *VAR_26, struct task_struct *VAR_27)
{

 u32 *VAR_28 = (u32 *)VAR_26;

 VAR_26[VAR_0] = 0;
 VAR_26[VAR_2] = 0;
 VAR_26[VAR_4] = 0;
 VAR_26[VAR_7] = 0;
 VAR_26[VAR_21] = 0;
 VAR_26[VAR_5] = 0;
 VAR_26[VAR_1] = ((struct inactive_task_frame *)VAR_27->thread.sp)->bp;
 VAR_28[VAR_12] = 0;
 VAR_28[VAR_3] = VAR_24;
 VAR_28[VAR_23] = VAR_25;
 VAR_26[VAR_19] = 0;
 VAR_26[VAR_20] = 0;
 VAR_26[VAR_13] = 0;
 VAR_26[VAR_14] = 0;
 VAR_26[VAR_15] = 0;
 VAR_26[VAR_16] = 0;
 VAR_26[VAR_17] = 0;
 VAR_26[VAR_18] = 0;

 VAR_26[VAR_11] = 0;
 VAR_26[VAR_22] = VAR_27->thread.sp;
}

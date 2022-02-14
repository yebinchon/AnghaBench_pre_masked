
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short* addr; unsigned short inst; } ;
struct TYPE_4__ {TYPE_1__ breakinfo; } ;
struct task_struct {TYPE_2__ thread; } ;



void FUNC_0(struct task_struct *VAR_0)
{
 if ((long)VAR_0->thread.breakinfo.addr != -1L) {
  *(VAR_0->thread.breakinfo.addr) = VAR_0->thread.breakinfo.inst;
  VAR_0->thread.breakinfo.addr = (unsigned short *)-1L;
 }
}

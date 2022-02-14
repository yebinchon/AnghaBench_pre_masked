
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mask; int addr; } ;
struct pt_regs {TYPE_2__ psw; } ;
struct TYPE_6__ {int cause; int address; } ;
struct TYPE_9__ {int control; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_8__ {TYPE_1__ per_event; TYPE_4__ per_user; } ;
struct TYPE_10__ {TYPE_3__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 (struct pt_regs*,int ) ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_4, void *VAR_5, int VAR_6)
{
 if (!(VAR_4->psw.mask & VAR_2))
  return;
 if (!(VAR_3->thread.per_user.control & VAR_0))
  return;
 if ((void *)VAR_3->thread.per_user.start > (VAR_5 + VAR_6))
  return;
 if ((void *)VAR_3->thread.per_user.end < VAR_5)
  return;
 VAR_3->thread.per_event.address = VAR_4->psw.addr;
 VAR_3->thread.per_event.cause = VAR_0 >> 16;
 FUNC_0(VAR_4, VAR_1);
}

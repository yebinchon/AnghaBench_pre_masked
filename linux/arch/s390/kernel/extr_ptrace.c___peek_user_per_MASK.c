
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long address; scalar_t__ paid; scalar_t__ cause; } ;
struct TYPE_4__ {unsigned long control; unsigned long start; unsigned long end; } ;
struct TYPE_6__ {TYPE_2__ per_event; TYPE_1__ per_user; } ;
struct task_struct {TYPE_3__ thread; } ;
struct per_struct_kernel {int access_id; int address; int perc_atmid; int ending_addr; int starting_addr; int bits; int cr11; int cr10; int cr9; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct task_struct *VAR_3,
         addr_t VAR_4)
{
 struct per_struct_kernel *VAR_5 = ((void*)0);

 if (VAR_4 == (addr_t) &VAR_5->cr9)

  return FUNC_0(VAR_2) ?
   VAR_1 : VAR_3->thread.per_user.control;
 else if (VAR_4 == (addr_t) &VAR_5->cr10)

  return FUNC_0(VAR_2) ?
   0 : VAR_3->thread.per_user.start;
 else if (VAR_4 == (addr_t) &VAR_5->cr11)

  return FUNC_0(VAR_2) ?
   -1UL : VAR_3->thread.per_user.end;
 else if (VAR_4 == (addr_t) &VAR_5->bits)

  return FUNC_0(VAR_2) ?
   (1UL << (VAR_0 - 1)) : 0;
 else if (VAR_4 == (addr_t) &VAR_5->starting_addr)

  return VAR_3->thread.per_user.start;
 else if (VAR_4 == (addr_t) &VAR_5->ending_addr)

  return VAR_3->thread.per_user.end;
 else if (VAR_4 == (addr_t) &VAR_5->perc_atmid)

  return (unsigned long)
   VAR_3->thread.per_event.cause << (VAR_0 - 16);
 else if (VAR_4 == (addr_t) &VAR_5->address)

  return VAR_3->thread.per_event.address;
 else if (VAR_4 == (addr_t) &VAR_5->access_id)

  return (unsigned long)
   VAR_3->thread.per_event.paid << (VAR_0 - 8);
 return 0;
}

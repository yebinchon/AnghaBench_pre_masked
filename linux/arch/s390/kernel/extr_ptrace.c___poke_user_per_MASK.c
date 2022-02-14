
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end; scalar_t__ start; scalar_t__ control; } ;
struct TYPE_4__ {TYPE_1__ per_user; } ;
struct task_struct {TYPE_2__ thread; } ;
struct per_struct_kernel {int ending_addr; int starting_addr; int cr9; } ;
typedef scalar_t__ addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct task_struct *VAR_2,
       addr_t VAR_3, addr_t VAR_4)
{
 struct per_struct_kernel *VAR_5 = ((void*)0);
 if (VAR_3 == (addr_t) &VAR_5->cr9)

  VAR_2->thread.per_user.control =
   VAR_4 & (VAR_1 | VAR_0);
 else if (VAR_3 == (addr_t) &VAR_5->starting_addr)

  VAR_2->thread.per_user.start = VAR_4;
 else if (VAR_3 == (addr_t) &VAR_5->ending_addr)

  VAR_2->thread.per_user.end = VAR_4;
}

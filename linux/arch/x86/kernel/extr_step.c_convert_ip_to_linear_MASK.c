
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* mm; } ;
struct pt_regs {unsigned long ip; unsigned long cs; } ;
struct desc_struct {int d; } ;
struct TYPE_5__ {int lock; TYPE_1__* ldt; } ;
struct TYPE_6__ {TYPE_2__ context; } ;
struct TYPE_4__ {unsigned long nr_entries; struct desc_struct* entries; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

unsigned long FUNC_5(struct task_struct *VAR_2, struct pt_regs *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_3->ip;
 VAR_5 = VAR_3->cs;
 if (FUNC_4(VAR_3)) {
  VAR_4 = (VAR_4 & 0xffff) + (VAR_5 << 4);
  return VAR_4;
 }
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (struct pt_regs*,unsigned long,unsigned long,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct pt_regs *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, u32 VAR_4, int VAR_5)
{
 struct mm_struct *VAR_6 = VAR_0->mm;




 FUNC_1(&VAR_6->mmap_sem);

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

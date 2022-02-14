
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {unsigned long vdso; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (struct vm_area_struct*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long,unsigned long,int,int *) ;
 scalar_t__ FUNC_2 (struct mm_struct*,unsigned long) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;

void FUNC_3(struct mm_struct *VAR_10, unsigned long VAR_11)
{
 struct vm_area_struct *VAR_12;
 unsigned long VAR_13;

 VAR_10->context.vdso = 0;

 if (VAR_8 == ((void*)0))
  return;

 if (FUNC_2(VAR_10, VAR_11))
  return;


 VAR_11 += VAR_1;
 VAR_13 = (VAR_9 - 1) << VAR_0;

 VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_13,
  VAR_6 | VAR_2 | VAR_4 | VAR_5 | VAR_3,
  &VAR_7);

 if (!FUNC_0(VAR_12))
  VAR_10->context.vdso = VAR_11;
}

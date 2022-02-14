
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int context; } ;
struct TYPE_2__ {unsigned long sllp; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;
 long FUNC_4 (unsigned long,unsigned long,unsigned long,int,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static long FUNC_7(struct mm_struct *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;





 if (VAR_5 >= FUNC_3(&VAR_4->context))
  return -VAR_0;

 VAR_6 = FUNC_2(&VAR_4->context, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_5(VAR_5 >= VAR_1)) {
  FUNC_0(1);
  return -VAR_0;
 }

 VAR_9 = FUNC_6(VAR_5);

 VAR_8 = FUNC_1(VAR_4, VAR_5);
 VAR_7 = VAR_2 | VAR_3[VAR_8].sllp;

 return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_9, 0);
}

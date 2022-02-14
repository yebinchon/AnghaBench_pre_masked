
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int id; scalar_t__ active; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mm_struct *VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7;

 if (VAR_5->context.id == VAR_0)
  return;

 FUNC_0(VAR_5->context.active != 0);

 FUNC_2(&VAR_1, VAR_6);
 VAR_7 = VAR_5->context.id;
 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_7, VAR_2);
  VAR_5->context.id = VAR_0;



  VAR_3[VAR_7] = ((void*)0);
  VAR_4++;
 }
 FUNC_3(&VAR_1, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long id; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct mm_struct *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1();
 VAR_3 = VAR_2->context.id;
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_3, VAR_1);
 FUNC_2();
}

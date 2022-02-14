
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asid; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int *,int *,unsigned int,struct mm_struct*) ;
 int VAR_0 ;

void FUNC_1(struct mm_struct *VAR_1, unsigned int VAR_2)
{
 FUNC_0(&VAR_0, &VAR_1->context.asid, VAR_2, VAR_1);
}

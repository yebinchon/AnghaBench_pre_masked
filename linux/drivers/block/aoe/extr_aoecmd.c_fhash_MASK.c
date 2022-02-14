
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct frame {size_t tag; int head; TYPE_1__* t; } ;
struct aoedev {int * factive; } ;
struct TYPE_2__ {struct aoedev* d; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct frame *VAR_1)
{
 struct aoedev *VAR_2 = VAR_1->t->d;
 u32 VAR_3;

 VAR_3 = VAR_1->tag % VAR_0;
 FUNC_0(&VAR_1->head, &VAR_2->factive[VAR_3]);
}

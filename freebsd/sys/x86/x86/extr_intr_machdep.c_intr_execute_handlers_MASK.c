
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct intsrc {scalar_t__* is_straycount; TYPE_1__* is_pic; struct intr_event* is_event; int * is_count; } ;
struct intr_event {int dummy; } ;
struct TYPE_2__ {int (* pic_vector ) (struct intsrc*) ;int (* pic_disable_source ) (struct intsrc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct intr_event*,struct trapframe*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct intsrc*) ;
 int FUNC_4 (struct intsrc*,int ) ;
 int VAR_5 ;

void
FUNC_5(struct intsrc *VAR_6, struct trapframe *VAR_7)
{
 struct intr_event *VAR_8;
 int VAR_9;







 (*VAR_6->is_count)++;
 FUNC_0(VAR_5);

 VAR_8 = VAR_6->is_event;





 VAR_9 = VAR_6->is_pic->pic_vector(VAR_6);
 if (VAR_9 == 0)
  VAR_4 = 1;





 if (FUNC_1(VAR_8, VAR_7) != 0) {
  VAR_6->is_pic->pic_disable_source(VAR_6, VAR_3);
  (*VAR_6->is_straycount)++;
  if (*VAR_6->is_straycount < VAR_2)
   FUNC_2(VAR_1, "stray irq%d\n", VAR_9);
  else if (*VAR_6->is_straycount == VAR_2)
   FUNC_2(VAR_0,
       "too many stray irq %d's: not logging anymore\n",
       VAR_9);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {scalar_t__ is_handlers; TYPE_1__* is_pic; } ;
struct TYPE_2__ {int (* pic_disable_intr ) (struct intsrc*) ;int (* pic_disable_source ) (struct intsrc*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 struct intsrc* FUNC_1 (void*) ;
 int FUNC_2 (struct intsrc*) ;
 int VAR_1 ;
 int FUNC_3 (struct intsrc*,int ) ;
 int FUNC_4 (struct intsrc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(void *VAR_2)
{
 struct intsrc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == 0) {
  FUNC_5(&VAR_1);
  VAR_3->is_handlers--;
  if (VAR_3->is_handlers == 0) {
   VAR_3->is_pic->pic_disable_source(VAR_3, VAR_0);
   VAR_3->is_pic->pic_disable_intr(VAR_3);
  }
  FUNC_2(VAR_3);
  FUNC_6(&VAR_1);
 }
 return (VAR_4);
}

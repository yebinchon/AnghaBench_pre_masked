
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {unsigned int version; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct list_head*,TYPE_1__*) ;
 unsigned int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

int FUNC_3(struct list_head *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned int VAR_4 = FUNC_2();




 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].version > VAR_4)
   continue;
  VAR_3 = FUNC_1(VAR_1, &VAR_0[VAR_2]);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lv0104cs_private {int int_time; int lock; } ;
struct TYPE_3__ {int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lv0104cs_private *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_3 != VAR_1[VAR_5].val)
   continue;

  if (VAR_4 == VAR_1[VAR_5].val2)
   break;
 }

 if (VAR_5 == FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_2->lock);
 VAR_2->int_time = VAR_5;
 FUNC_2(&VAR_2->lock);

 return 0;
}

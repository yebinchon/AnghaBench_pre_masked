
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zopt2201_data {int lock; } ;
struct TYPE_3__ {int us; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct zopt2201_data*,int) ;

__attribute__((used)) static int FUNC_4(struct zopt2201_data *VAR_2,
         int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 != 0)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  if (VAR_4 == VAR_1[VAR_5].us) {
   FUNC_1(&VAR_2->lock);
   VAR_6 = FUNC_3(VAR_2, VAR_5);
   FUNC_2(&VAR_2->lock);
   return VAR_6;
  }

 return -VAR_0;
}

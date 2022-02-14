
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zopt2201_data {int dummy; } ;
struct TYPE_3__ {int scale; int uscale; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct zopt2201_data*,int) ;

__attribute__((used)) static int FUNC_2(struct zopt2201_data *VAR_2,
         int VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  if (VAR_3 == VAR_1[VAR_5].scale &&
      VAR_4 == VAR_1[VAR_5].uscale)
   return FUNC_1(VAR_2, VAR_5);

 return -VAR_0;
}

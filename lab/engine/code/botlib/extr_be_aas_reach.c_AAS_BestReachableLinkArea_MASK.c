
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int areanum; struct TYPE_3__* next_area; } ;
typedef TYPE_1__ aas_link_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(aas_link_t *VAR_0)
{
 aas_link_t *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next_area)
 {
  if (FUNC_0(VAR_1->areanum) || FUNC_2(VAR_1->areanum))
  {
   return VAR_1->areanum;
  }
 }

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next_area)
 {
  if (VAR_1->areanum) return VAR_1->areanum;


  if (FUNC_1(VAR_1->areanum))
   return VAR_1->areanum;
 }
 return 0;
}

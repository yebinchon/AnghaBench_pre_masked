
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u16 FUNC_2(void)
{
 u16 VAR_6 = VAR_3;
 int VAR_7;

 FUNC_0(&VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_4[VAR_7] &&
      VAR_4[VAR_7]->state == VAR_0) {
   VAR_6 = VAR_2;
   break;
  }

 FUNC_1(&VAR_5);

 return VAR_6;
}

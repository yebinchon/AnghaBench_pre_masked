
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8 = -VAR_2;

 FUNC_0(&VAR_3, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_4[VAR_7].state == VAR_1) {
   VAR_4[VAR_7].state = VAR_0;
   VAR_8 = VAR_7;
   break;
  }
 }

 FUNC_1(&VAR_3, VAR_6);
 return VAR_8;
}

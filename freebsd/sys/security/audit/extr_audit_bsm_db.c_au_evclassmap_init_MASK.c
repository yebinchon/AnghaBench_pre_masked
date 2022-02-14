
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int head; } ;
struct TYPE_3__ {scalar_t__ sy_auevent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_3(void)
{
 int VAR_5;

 FUNC_0();
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_1(&VAR_3[VAR_5].head);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4[VAR_5].sy_auevent != VAR_0)
   FUNC_2(VAR_4[VAR_5].sy_auevent, 0);
 }
}

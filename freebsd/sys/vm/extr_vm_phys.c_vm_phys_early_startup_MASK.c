
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

void
FUNC_4(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2 + 1] != 0; VAR_2 += 2) {
  VAR_1[VAR_2] = FUNC_0(VAR_1[VAR_2]);
  VAR_1[VAR_2 + 1] = FUNC_1(VAR_1[VAR_2 + 1]);
 }
}

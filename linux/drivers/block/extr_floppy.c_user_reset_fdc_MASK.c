
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_6, int VAR_7, bool VAR_8)
{
 int VAR_9;

 if (FUNC_0(VAR_6))
  return -VAR_0;

 if (VAR_7 == VAR_2)
  VAR_1->reset = 1;
 if (VAR_1->reset) {
  VAR_3 = &VAR_4;
  VAR_9 = FUNC_2(VAR_5, VAR_8);
  if (VAR_9 == -VAR_0)
   return -VAR_0;
 }
 FUNC_1();
 return 0;
}

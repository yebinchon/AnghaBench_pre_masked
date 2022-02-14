
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 bool VAR_6 = 0;

 FUNC_3(&VAR_0);
 VAR_2--;
 if (VAR_2 == 0) {
  FUNC_1();
  FUNC_0(&VAR_5->dev, "punit semaphore held for %ums\n",
   FUNC_2(VAR_4 - VAR_3));
  VAR_6 = 1;
 }
 FUNC_4(&VAR_0);

 if (VAR_6)
  FUNC_5(&VAR_1);
}

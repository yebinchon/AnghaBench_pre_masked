
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(void)
{
 int VAR_3 = FUNC_2();

 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev, VAR_1,
      VAR_0);

 FUNC_1();

 return VAR_3 > 0 ? 1 : 0;
}

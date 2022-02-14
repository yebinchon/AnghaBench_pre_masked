
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;

bool FUNC_2(u32 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->dev, VAR_1,
        VAR_0);
 if (VAR_4 <= 0)
  return 0;

 return FUNC_1(VAR_2->dev, VAR_3);
}

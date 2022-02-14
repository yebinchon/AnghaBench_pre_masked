
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_6;

 FUNC_0(VAR_4->dev, VAR_1, &VAR_6);
 if (!(VAR_6 & VAR_2))
  return;
 VAR_6 |= VAR_3;
 FUNC_1(VAR_4->dev, VAR_1, VAR_6);
 FUNC_1(VAR_4->dev, VAR_1, 0);

 if (VAR_5 <= 0x30) {
  FUNC_1(VAR_4->dev, VAR_1,
           VAR_0);
  FUNC_1(VAR_4->dev, VAR_1,
           0);
 }
}

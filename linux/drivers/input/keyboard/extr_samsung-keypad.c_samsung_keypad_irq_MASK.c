
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_keypad {TYPE_1__* pdev; int stopped; int wait; scalar_t__ base; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct samsung_keypad*,unsigned int*) ;
 int FUNC_5 (struct samsung_keypad*,unsigned int*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct samsung_keypad *VAR_5 = VAR_4;
 unsigned int VAR_6[VAR_2];
 unsigned int VAR_7;
 bool VAR_8;

 FUNC_1(&VAR_5->pdev->dev);

 do {
  VAR_7 = FUNC_3(VAR_5->base + VAR_1);

  FUNC_7(~0x0, VAR_5->base + VAR_1);

  FUNC_5(VAR_5, VAR_6);

  VAR_8 = FUNC_4(VAR_5, VAR_6);
  if (VAR_8)
   FUNC_6(VAR_5->wait, VAR_5->stopped,
        FUNC_0(50));

 } while (VAR_8 && !VAR_5->stopped);

 FUNC_2(&VAR_5->pdev->dev);

 return VAR_0;
}

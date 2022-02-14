
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_3__ {int domain; } ;
struct TYPE_4__ {TYPE_1__ irq; } ;
struct tc3589x_gpio {TYPE_2__ chip; struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct tc3589x*,int ,int,unsigned int*) ;
 int FUNC_5 (struct tc3589x*,scalar_t__,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct tc3589x_gpio *VAR_7 = VAR_6;
 struct tc3589x *VAR_8 = VAR_7->tc3589x;
 u8 VAR_9[VAR_0];
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_8, VAR_4,
     FUNC_0(VAR_9), VAR_9);
 if (VAR_10 < 0)
  return VAR_2;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {
  unsigned int VAR_12 = VAR_9[VAR_11];
  if (!VAR_12)
   continue;

  while (VAR_12) {
   int VAR_13 = FUNC_1(VAR_12);
   int VAR_14 = VAR_11 * 8 + VAR_13;
   int VAR_15 = FUNC_3(VAR_7->chip.irq.domain,
         VAR_14);

   FUNC_2(VAR_15);
   VAR_12 &= ~(1 << VAR_13);
  }

  FUNC_5(VAR_8, VAR_3 + VAR_11, VAR_9[VAR_11]);
 }

 return VAR_1;
}

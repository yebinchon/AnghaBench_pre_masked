
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct charlcd {int dev; int complete; scalar_t__ virtbase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct charlcd *VAR_6 = VAR_5;
 u8 VAR_7;

 VAR_7 = FUNC_2(VAR_6->virtbase + VAR_2) & 0x01;

 FUNC_3(VAR_1, VAR_6->virtbase + VAR_0);
 if (VAR_7)
  FUNC_0(&VAR_6->complete);
 else
  FUNC_1(VAR_6->dev, "Spurious IRQ (%02x)\n", VAR_7);
 return VAR_3;
}

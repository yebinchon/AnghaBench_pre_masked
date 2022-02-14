
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct talitos_private {scalar_t__ reg; scalar_t__* irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 int FUNC_3 (struct talitos_private*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7)
{
 struct talitos_private *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9 = VAR_6;
 bool VAR_10 = FUNC_3(VAR_8);
 u32 VAR_11 = VAR_10 ? VAR_1 : VAR_2;

 FUNC_5(VAR_8->reg + VAR_3, VAR_11);

 while ((FUNC_4(VAR_8->reg + VAR_3) & VAR_11)
        && --VAR_9)
  FUNC_0();

 if (VAR_8->irq[1]) {
  VAR_11 = VAR_4 | VAR_5;
  FUNC_5(VAR_8->reg + VAR_3, VAR_11);
 }

 if (VAR_9 == 0) {
  FUNC_1(VAR_7, "failed to reset device\n");
  return -VAR_0;
 }

 return 0;
}

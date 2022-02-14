
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w6692_hw {int imask; int lock; int name; int irqcnt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w6692_hw*,int ) ;
 int FUNC_1 (struct w6692_hw*,int) ;
 int FUNC_2 (struct w6692_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct w6692_hw*) ;
 int FUNC_4 (struct w6692_hw*) ;
 int FUNC_5 (struct w6692_hw*) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_12, void *VAR_13)
{
 struct w6692_hw *VAR_14 = VAR_13;
 u8 VAR_15;

 FUNC_7(&VAR_14->lock);
 VAR_15 = FUNC_0(VAR_14, VAR_11);
 if ((VAR_15 | VAR_14->imask) == VAR_14->imask) {

  FUNC_8(&VAR_14->lock);
  return VAR_1;
 }
 VAR_14->irqcnt++;
 FUNC_6("%s: ista %02x\n", VAR_14->name, VAR_15);
 VAR_15 &= ~VAR_14->imask;
 if (VAR_15 & VAR_3)
  FUNC_1(VAR_14, 0);
 if (VAR_15 & VAR_4)
  FUNC_1(VAR_14, 1);
 if (VAR_15 & VAR_6)
  FUNC_3(VAR_14);
 if (VAR_15 & VAR_7)
  FUNC_2(VAR_14, VAR_2);
 if (VAR_15 & VAR_8)
  FUNC_5(VAR_14);
 if (VAR_15 & VAR_5)
  FUNC_4(VAR_14);
 if (VAR_15 & (VAR_9 | VAR_10))
  FUNC_6("%s: W6692 spurious XINT!\n", VAR_14->name);

 FUNC_8(&VAR_14->lock);
 return VAR_0;
}

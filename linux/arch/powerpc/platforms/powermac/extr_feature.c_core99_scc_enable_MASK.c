
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct macio_chip {unsigned long flags; } ;
struct device_node {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 long VAR_22 ;
 long VAR_23 ;
 long VAR_24 ;
 int FUNC_5 (unsigned long) ;
 struct macio_chip* FUNC_6 (struct device_node*,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;

__attribute__((used)) static long FUNC_9(struct device_node *VAR_25, long VAR_26, long VAR_27)
{
 struct macio_chip* VAR_28;
 unsigned long VAR_29;
 unsigned long VAR_30;
 u32 VAR_31;

 VAR_28 = FUNC_6(VAR_25, 0);
 if (!VAR_28)
  return -VAR_0;
 if (FUNC_8(VAR_25, "ch-a"))
  VAR_30 = VAR_19;
 else if (FUNC_8(VAR_25, "ch-b"))
  VAR_30 = VAR_20;
 else
  return -VAR_0;

 if (VAR_27) {
  int VAR_32 = 0;
  int VAR_33 = 0;

  FUNC_0(VAR_29);
  VAR_31 = FUNC_3(VAR_2);

  if (!(VAR_31 & VAR_17)) {
   VAR_31 |= VAR_17;
   VAR_32 = 1;
  }
  if (VAR_30 & VAR_19) {
   VAR_31 |= VAR_13;

   if ((VAR_26 & 0xfff) == VAR_23)
    VAR_31 &= ~VAR_15;
   else
    VAR_31 |= VAR_15;
  }
  if (VAR_30 & VAR_20) {
   VAR_31 |= VAR_14;

   if ((VAR_26 & 0xfff) == VAR_24) {
    VAR_31 &= ~VAR_16;
    VAR_31 |= VAR_7;
    VAR_31 |= VAR_4 | VAR_3;
    VAR_31 |= VAR_11;
    VAR_31 &= ~(VAR_8|VAR_6|VAR_5);
    VAR_31 &= ~(VAR_12|VAR_9);
    VAR_33 = 1;
   } else
    VAR_31 |= VAR_16;
  }
  FUNC_4(VAR_2, VAR_31);
  VAR_28->flags |= VAR_30;
  if (VAR_32) {
   FUNC_2(VAR_2, VAR_18);
   (void)FUNC_3(VAR_2);
   FUNC_5(VAR_29);
   FUNC_7(15);
   FUNC_0(VAR_29);
   FUNC_1(VAR_2, VAR_18);
  }
  if (VAR_33) {
   FUNC_2(VAR_2, VAR_10);
   (void)FUNC_3(VAR_2);
   FUNC_5(VAR_29);
   FUNC_7(15);
   FUNC_0(VAR_29);
   FUNC_1(VAR_2, VAR_10);
  }
  FUNC_5(VAR_29);
  if (VAR_26 & VAR_22)
   VAR_28->flags |= VAR_21;
 } else {
  if (VAR_28->flags & VAR_21)
   return -VAR_1;
  FUNC_0(VAR_29);
  VAR_31 = FUNC_3(VAR_2);
  if (VAR_30 & VAR_19)
   VAR_31 &= ~VAR_13;
  if (VAR_30 & VAR_20) {
   VAR_31 &= ~VAR_14;

   if ((VAR_26 & 0xfff) == VAR_24) {
    VAR_31 &= ~VAR_7;
    VAR_31 &= ~(VAR_4 | VAR_3);
    VAR_31 &= ~(VAR_8|VAR_6|VAR_5);
    VAR_31 &= ~(VAR_11|VAR_12|VAR_9);
   }
  }
  FUNC_4(VAR_2, VAR_31);
  if ((VAR_31 & (VAR_13 | VAR_14)) == 0) {
   VAR_31 &= ~VAR_17;
   FUNC_4(VAR_2, VAR_31);
  }
  VAR_28->flags &= ~(VAR_30);
  FUNC_5(VAR_29);
  FUNC_7(10);
 }
 return 0;
}

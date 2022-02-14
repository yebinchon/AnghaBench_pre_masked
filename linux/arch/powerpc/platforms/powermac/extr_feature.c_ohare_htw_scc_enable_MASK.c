
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_chip {scalar_t__ type; unsigned long flags; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ model_id; } ;


 long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (unsigned long) ;
 struct macio_chip* FUNC_4 (struct device_node*,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 TYPE_1__ VAR_19 ;
 int FUNC_7 (int) ;

__attribute__((used)) static long FUNC_8(struct device_node *VAR_20, long VAR_21,
     long VAR_22)
{
 struct macio_chip* VAR_23;
 unsigned long VAR_24;
 unsigned long VAR_25;
 unsigned long VAR_26;
 int VAR_27, VAR_28;
 unsigned long VAR_29;

 VAR_23 = FUNC_4(VAR_20, 0);
 if (!VAR_23)
  return -VAR_0;
 if (FUNC_6(VAR_20, "ch-a"))
  VAR_24 = VAR_4;
 else if (FUNC_6(VAR_20, "ch-b"))
  VAR_24 = VAR_5;
 else
  return -VAR_0;

 VAR_27 = (VAR_23->type == VAR_17 || VAR_23->type == VAR_18
  || VAR_23->type == VAR_16);

 VAR_28 = (VAR_19.model_id != VAR_15 &&
   VAR_19.model_id != VAR_14);
 if (VAR_22) {




  FUNC_0(VAR_26);
  VAR_25 = FUNC_1(VAR_7);

  if (!(VAR_25 & VAR_10)) {
   VAR_25 |= VAR_10;
   if (VAR_27) {





    if (VAR_28)
     VAR_25 &= ~VAR_3;
    FUNC_2(VAR_7, VAR_25);
    VAR_25 |= (VAR_29 = VAR_2);
    FUNC_2(VAR_7, VAR_25);
   } else {
    VAR_25 |= (VAR_29 = VAR_11);
    FUNC_2(VAR_7, VAR_25);
   }
   FUNC_3(VAR_26);
   (void)FUNC_1(VAR_7);
   FUNC_5(15);
   FUNC_0(VAR_26);
   VAR_25 &= ~VAR_29;
   FUNC_2(VAR_7, VAR_25);
  }
  if (VAR_24 & VAR_4)
   VAR_25 |= VAR_8;
  if (VAR_24 & VAR_5)
   VAR_25 |= VAR_9;
  FUNC_2(VAR_7, VAR_25);
  VAR_23->flags |= VAR_24;
  FUNC_3(VAR_26);
  if (VAR_21 & VAR_12)
   VAR_23->flags |= VAR_6;
 } else {
  if (VAR_23->flags & VAR_6)
   return -VAR_1;
  FUNC_0(VAR_26);
  VAR_25 = FUNC_1(VAR_7);
  if (VAR_24 & VAR_4)
   VAR_25 &= ~VAR_8;
  if (VAR_24 & VAR_5)
   VAR_25 &= ~VAR_9;
  FUNC_2(VAR_7, VAR_25);
  if ((VAR_25 & (VAR_8 | VAR_9)) == 0) {
   VAR_25 &= ~VAR_10;
   if (VAR_27 && VAR_28)
    VAR_25 |= VAR_3;
   FUNC_2(VAR_7, VAR_25);
  }
  VAR_23->flags &= ~(VAR_24);
  FUNC_3(VAR_26);
  FUNC_5(10);




 }
 return 0;
}

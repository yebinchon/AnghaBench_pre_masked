
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isac_hw {int dummy; } ;
struct ipac_hw {int type; int name; TYPE_1__* hscx; struct isac_hw isac; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ipac_hw*,scalar_t__) ;
 int FUNC_1 (struct isac_hw*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct isac_hw*,int) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ,int,int ) ;
 int FUNC_6 () ;

irqreturn_t
FUNC_7(struct ipac_hw *VAR_20, int VAR_21)
{
 int VAR_22 = VAR_21 + 1;
 u8 VAR_23, VAR_24;
 struct isac_hw *VAR_25 = &VAR_20->isac;

 if (VAR_20->type & VAR_7) {
  VAR_23 = FUNC_0(VAR_20, VAR_16);
  while (VAR_23 && --VAR_22) {
   FUNC_4("%s: ISTA %02x\n", VAR_20->name, VAR_23);
   if (VAR_23 & VAR_0)
    FUNC_2(&VAR_20->hscx[0], VAR_23);
   if (VAR_23 & VAR_1)
    FUNC_2(&VAR_20->hscx[1], VAR_23);
   if (VAR_23 & (VAR_18 | VAR_17))
    FUNC_3(&VAR_20->isac, VAR_23);
   VAR_23 = FUNC_0(VAR_20, VAR_16);
  }
 } else if (VAR_20->type & VAR_6) {
  VAR_23 = FUNC_0(VAR_20, VAR_3);
  while (VAR_23 && --VAR_22) {
   FUNC_4("%s: ISTA %02x\n", VAR_20->name, VAR_23);
   if (VAR_23 & (VAR_13 | VAR_10)) {
    VAR_24 = FUNC_1(VAR_25, VAR_19);
    FUNC_4("%s: ISTAD %02x\n", VAR_20->name, VAR_24);
    if (VAR_24 & VAR_2)
     FUNC_4("%s TIN2 irq\n", VAR_20->name);
    if (VAR_23 & VAR_10)
     VAR_24 |= 1;
    FUNC_3(VAR_25, VAR_24);
   }
   if (VAR_23 & (VAR_11 | VAR_8))
    FUNC_2(&VAR_20->hscx[0], VAR_23);
   if (VAR_23 & (VAR_12 | VAR_9))
    FUNC_2(&VAR_20->hscx[1], VAR_23);
   VAR_23 = FUNC_0(VAR_20, VAR_3);
  }
 } else if (VAR_20->type & VAR_5) {
  while (--VAR_22) {
   VAR_23 = FUNC_0(VAR_20, VAR_4 + VAR_20->hscx[1].off);
   FUNC_4("%s: B2 ISTA %02x\n", VAR_20->name, VAR_23);
   if (VAR_23)
    FUNC_2(&VAR_20->hscx[1], VAR_23);
   VAR_24 = FUNC_1(VAR_25, VAR_19);
   FUNC_4("%s: ISTAD %02x\n", VAR_20->name, VAR_24);
   if (VAR_24)
    FUNC_3(VAR_25, VAR_24);
   if (0 == (VAR_23 | VAR_24))
    break;
  }
 }
 if (VAR_22 > VAR_21)
  return VAR_15;
 if (VAR_22 < VAR_21)
  FUNC_4("%s: %d irqloops cpu%d\n", VAR_20->name,
    VAR_21 - VAR_22, FUNC_6());
 if (VAR_21 && !VAR_22)
  FUNC_5("%s: %d IRQ LOOP cpu%d\n", VAR_20->name,
     VAR_21, FUNC_6());
 return VAR_14;
}

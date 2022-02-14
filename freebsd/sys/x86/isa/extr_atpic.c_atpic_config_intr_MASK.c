
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intsrc {int dummy; } ;
struct atpic_intsrc {int at_trigger; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct intsrc*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct intsrc *VAR_10, enum intr_trigger VAR_11,
    enum intr_polarity VAR_12)
{
 struct atpic_intsrc *VAR_13 = (struct atpic_intsrc *)VAR_10;
 u_int VAR_14;


 if (VAR_11 == VAR_5)
  VAR_11 = VAR_6;
 if (VAR_12 == VAR_2)
  VAR_12 = VAR_3;
 VAR_14 = FUNC_0(VAR_10);
 if ((VAR_11 == VAR_6 && VAR_12 == VAR_4) ||
     (VAR_11 == VAR_7 && VAR_12 == VAR_3)) {
  FUNC_2(
  "atpic: Mismatched config for IRQ%u: trigger %s, polarity %s\n",
      VAR_14, VAR_11 == VAR_6 ? "edge" : "level",
      VAR_12 == VAR_3 ? "high" : "low");
  return (VAR_0);
 }


 if (VAR_13->at_trigger == VAR_11)
  return (0);






 if ((VAR_14 == 0 || VAR_14 == 1 || VAR_14 == 2 || VAR_14 == 13) &&
     VAR_11 == VAR_7) {
  if (VAR_8)
   FUNC_2(
  "atpic: Ignoring invalid level/low configuration for IRQ%u\n",
       VAR_14);
  return (VAR_0);
 }
 if (!VAR_9) {
  if (VAR_8)
   FUNC_2("atpic: No ELCR to configure IRQ%u as %s\n",
       VAR_14, VAR_11 == VAR_6 ? "edge/high" :
       "level/low");
  return (VAR_1);
 }
 if (VAR_8)
  FUNC_2("atpic: Programming IRQ%u as %s\n", VAR_14,
      VAR_11 == VAR_6 ? "edge/high" : "level/low");
 FUNC_3();
 FUNC_1(FUNC_0(VAR_10), VAR_11);
 VAR_13->at_trigger = VAR_11;
 FUNC_4();
 return (0);
}

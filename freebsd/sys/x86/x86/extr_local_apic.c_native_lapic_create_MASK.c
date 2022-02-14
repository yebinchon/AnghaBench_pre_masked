
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {scalar_t__ lvt_active; } ;
struct TYPE_5__ {int la_present; int la_id; int * la_ioint_irqs; TYPE_3__* la_elvts; TYPE_1__* la_lvts; } ;
struct TYPE_4__ {scalar_t__ lvt_active; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 TYPE_3__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(u_int VAR_17, int VAR_18)
{
 int VAR_19;

 if (VAR_17 > VAR_16) {
  FUNC_3("APIC: Ignoring local APIC with ID %d\n", VAR_17);
  if (VAR_18)
   FUNC_2("Can't ignore BSP");
  return;
 }
 FUNC_0(!VAR_14[VAR_17].la_present, ("duplicate local APIC %u",
     VAR_17));





 VAR_14[VAR_17].la_present = 1;
 VAR_14[VAR_17].la_id = VAR_17;
 for (VAR_19 = 0; VAR_19 <= VAR_2; VAR_19++) {
  VAR_14[VAR_17].la_lvts[VAR_19] = VAR_15[VAR_19];
  VAR_14[VAR_17].la_lvts[VAR_19].lvt_active = 0;
 }
 for (VAR_19 = 0; VAR_19 <= VAR_0; VAR_19++) {
  VAR_14[VAR_17].la_elvts[VAR_19] = VAR_13[VAR_19];
  VAR_14[VAR_17].la_elvts[VAR_19].lvt_active = 0;
 }
 for (VAR_19 = 0; VAR_19 <= VAR_3; VAR_19++)
     VAR_14[VAR_17].la_ioint_irqs[VAR_19] = VAR_10;
 VAR_14[VAR_17].la_ioint_irqs[VAR_7 - VAR_1] = VAR_11;
 VAR_14[VAR_17].la_ioint_irqs[VAR_4 - VAR_1] =
     VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dest_logical; int (* init_apic_ldr ) () ;int (* apic_id_registered ) () ;scalar_t__ disable_esr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_18 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 () ;
 scalar_t__ VAR_21 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_15(void)
{
 int VAR_25 = FUNC_12();
 unsigned int VAR_26;

 if (VAR_21) {
  FUNC_8();
  return;
 }





 VAR_26 = FUNC_5(VAR_10);
 VAR_26 &= ~VAR_11;
 FUNC_6(VAR_10, VAR_26);
 FUNC_0(!VAR_19->apic_id_registered());






 VAR_19->init_apic_ldr();
 VAR_26 = FUNC_5(VAR_13);
 VAR_26 &= ~VAR_14;
 VAR_26 |= 0x10;
 FUNC_6(VAR_13, VAR_26);


 FUNC_3();




 VAR_26 = FUNC_5(VAR_10);
 VAR_26 &= ~VAR_15;



 VAR_26 |= VAR_11;
 VAR_26 |= VAR_18;
 FUNC_6(VAR_10, VAR_26);

 FUNC_11();
 VAR_26 = FUNC_5(VAR_6) & VAR_9;
 if (!VAR_25 && (VAR_22 || !VAR_26 || VAR_23)) {
  VAR_26 = VAR_0;
  FUNC_4(VAR_16, "enabled ExtINT on CPU#%d\n", VAR_25);
 } else {
  VAR_26 = VAR_0 | VAR_9;
  FUNC_4(VAR_16, "masked ExtINT on CPU#%d\n", VAR_25);
 }
 FUNC_6(VAR_6, VAR_26);





 if ((!VAR_25 && VAR_20 != VAR_4) ||
     VAR_20 == VAR_3)
  VAR_26 = VAR_1;
 else
  VAR_26 = VAR_1 | VAR_9;


 if (!FUNC_10())
  VAR_26 |= VAR_8;
 FUNC_6(VAR_7, VAR_26);






}

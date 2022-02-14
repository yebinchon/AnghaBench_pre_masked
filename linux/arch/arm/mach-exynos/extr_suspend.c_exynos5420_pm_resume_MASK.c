
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pmu_spare3; scalar_t__ sysram_phys; scalar_t__ secure_firmware; scalar_t__ sysram_base; int cpu_state; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_14 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_15;


 VAR_15 = FUNC_3(VAR_7);
 FUNC_4(VAR_15 | VAR_10,
         VAR_7);


 FUNC_5(VAR_14.cpu_state,
         VAR_14.sysram_base + VAR_0);
 if (VAR_14.secure_firmware)
  FUNC_2(VAR_13,
      FUNC_0(VAR_14.sysram_phys +
         VAR_0),
      VAR_8, 0);

 FUNC_4(VAR_6,
   VAR_9);

 if (FUNC_1())
  goto early_wakeup;

 FUNC_4(VAR_14.pmu_spare3, VAR_12);

early_wakeup:

 VAR_15 = FUNC_3(VAR_4);
 VAR_15 &= ~VAR_5;
 FUNC_4(VAR_15, VAR_4);

 VAR_15 = FUNC_3(VAR_2);
 VAR_15 &= ~VAR_1;
 FUNC_4(VAR_15, VAR_2);

 VAR_15 = FUNC_3(VAR_3);
 VAR_15 &= ~VAR_1;
 FUNC_4(VAR_15, VAR_3);


 FUNC_4(0x0, VAR_11);
}

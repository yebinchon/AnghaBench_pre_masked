
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sysram_phys; scalar_t__ secure_firmware; scalar_t__ sysram_base; int cpu_state; void* pmu_spare3; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(void)
{
 unsigned int VAR_15;


 FUNC_5();

 VAR_14.pmu_spare3 = FUNC_7(VAR_11);







 VAR_14.cpu_state = FUNC_9(VAR_14.sysram_base +
        VAR_2);
 FUNC_10(0x0, VAR_14.sysram_base + VAR_2);
 if (VAR_14.secure_firmware)
  FUNC_6(VAR_12, FUNC_2(VAR_14.sysram_phys +
        VAR_2),
      0, 0);

 FUNC_4();


 if (FUNC_1(VAR_0))
  FUNC_8(FUNC_3(VAR_13), VAR_10);

 VAR_15 = FUNC_7(FUNC_0(0));
 VAR_15 &= ~VAR_9;
 FUNC_8(VAR_15, FUNC_0(0));

 VAR_15 = FUNC_7(VAR_7);
 VAR_15 |= VAR_8;
 FUNC_8(VAR_15, VAR_7);

 VAR_15 = FUNC_7(VAR_1);
 VAR_15 &= ~VAR_5;
 FUNC_8(VAR_15, VAR_1);

 VAR_15 = FUNC_7(VAR_4);
 VAR_15 |= VAR_3;
 FUNC_8(VAR_15, VAR_4);

 VAR_15 = FUNC_7(VAR_6);
 VAR_15 |= VAR_3;
 FUNC_8(VAR_15, VAR_6);
}

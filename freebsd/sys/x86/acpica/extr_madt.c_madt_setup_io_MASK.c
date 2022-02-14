
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {int SciInterrupt; } ;
struct TYPE_6__ {int * io_apic; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (void*,int ,int ) ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_9 (int,void**,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int ,int *) ;
 TYPE_1__* FUNC_11 (int,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(void)
{
 void *VAR_13;
 u_int VAR_14;
 int VAR_15;

 FUNC_2(VAR_9 != ((void*)0), ("local APICs not initialized"));


 VAR_15 = FUNC_4();
 if (FUNC_0(VAR_15)) {
  FUNC_13("MADT: ACPI Startup failed with %s\n",
      FUNC_1(VAR_15));
  FUNC_13("Try disabling either ACPI or apic support.\n");
  FUNC_12("Using MADT but ACPI doesn't work");
 }

 VAR_8 = FUNC_11(sizeof(*VAR_8) * (VAR_4 + 1), VAR_5,
     VAR_6 | VAR_7);


 FUNC_10(VAR_11, ((void*)0));


 FUNC_10(VAR_12, ((void*)0));





 if (!VAR_10) {
  if (FUNC_9(VAR_1.SciInterrupt, &VAR_13,
      &VAR_14) != 0)
   FUNC_13("MADT: Could not find APIC for SCI IRQ %u\n",
       VAR_1.SciInterrupt);
  else {
   FUNC_13(
 "MADT: Forcing active-low polarity and level trigger for SCI\n");
   FUNC_7(VAR_13, VAR_14, VAR_2);
   FUNC_8(VAR_13, VAR_14, VAR_3);
  }
 }


 for (VAR_15 = 0; VAR_15 <= VAR_4; VAR_15++)
  if (VAR_8[VAR_15].io_apic != ((void*)0))
   FUNC_6(VAR_8[VAR_15].io_apic);


 FUNC_3(VAR_0);

 FUNC_5(VAR_8, VAR_5);
 VAR_8 = ((void*)0);


 FUNC_5(VAR_9, VAR_5);
 VAR_9 = ((void*)0);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* x86_32_early_logical_apicid ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,int,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_9(int VAR_16, int VAR_17)
{
 int VAR_18, VAR_19 = VAR_10;
 bool VAR_20 = FUNC_2(VAR_5,
    VAR_12);
 if (VAR_7 != VAR_0 &&
     VAR_7 != FUNC_5() &&
     VAR_7 == VAR_16) {
  int VAR_21 = VAR_11 + VAR_8;

  FUNC_4("APIC: Disabling requested cpu."
      " Processor %d/0x%x ignored.\n",
      VAR_21, VAR_16);

  VAR_8++;
  return -VAR_2;
 }





 if (!VAR_20 && VAR_11 >= VAR_10 - 1 &&
     VAR_16 != VAR_5) {
  int VAR_22 = VAR_19 + VAR_8 - 1;

  FUNC_4(
   "APIC: NR_CPUS/possible_cpus limit of %i almost"
   " reached. Keeping one slot for boot cpu."
   "  Processor %d/0x%x ignored.\n", VAR_19, VAR_22, VAR_16);

  VAR_8++;
  return -VAR_2;
 }

 if (VAR_11 >= VAR_10) {
  int VAR_23 = VAR_19 + VAR_8;

  FUNC_4("APIC: NR_CPUS/possible_cpus limit of %i "
      "reached. Processor %d/0x%x ignored.\n",
      VAR_19, VAR_23, VAR_16);

  VAR_8++;
  return -VAR_1;
 }

 if (VAR_16 == VAR_5) {







  VAR_18 = 0;


  VAR_6[0] = VAR_16;
 } else {
  VAR_18 = FUNC_0(VAR_16);
  if (VAR_18 < 0) {
   VAR_8++;
   return -VAR_1;
  }
 }




 if (VAR_17 == 0x0) {
  FUNC_4("BIOS bug: APIC version is 0 for CPU %d/0x%x, fixing up to 0x10\n",
      VAR_18, VAR_16);
  VAR_17 = 0x10;
 }

 if (VAR_17 != VAR_4) {
  FUNC_4("BIOS bug: APIC version mismatch, boot CPU: %x, CPU %d: version %x\n",
   VAR_4, VAR_18, VAR_17);
 }

 if (VAR_16 > VAR_9)
  VAR_9 = VAR_16;
 FUNC_6(VAR_18, 1);
 FUNC_3(VAR_16, VAR_12);
 FUNC_7(VAR_18, 1);
 VAR_11++;

 return VAR_18;
}

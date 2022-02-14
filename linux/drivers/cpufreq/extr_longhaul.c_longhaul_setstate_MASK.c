
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {int new; void* old; } ;
struct TYPE_8__ {int address; } ;
struct TYPE_7__ {unsigned int driver_data; } ;
struct TYPE_5__ {scalar_t__ bm_control; } ;
struct TYPE_6__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int VAR_11 ;
 int FUNC_8 () ;
 unsigned int VAR_12 ;
 TYPE_3__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int) ;
 int* VAR_16 ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 (int,scalar_t__) ;
 TYPE_2__* VAR_17 ;
 int FUNC_12 (char*,int ,int,int,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int VAR_18 ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct cpufreq_policy *VAR_19,
  unsigned int VAR_20)
{
 unsigned int VAR_21;
 int VAR_22, VAR_23;
 struct cpufreq_freqs VAR_24;
 unsigned long VAR_25;
 unsigned int VAR_26, VAR_27;
 u16 VAR_28 = 0;
 u32 VAR_29 = 1000;
 unsigned int VAR_30 = 0;

 VAR_21 = VAR_13[VAR_20].driver_data;

 VAR_23 = VAR_16[VAR_21 & 0x1f];
 if (VAR_23 == -1)
  return -VAR_3;

 VAR_22 = FUNC_1(VAR_23);
 if ((VAR_22 > VAR_10) || (VAR_22 < VAR_15))
  return -VAR_3;


 if (VAR_7 && VAR_12 < VAR_20)
  VAR_30 = 1;

 VAR_24.old = FUNC_1(FUNC_8());
 VAR_24.new = VAR_22;

 FUNC_12("Setting to FSB:%dMHz Mult:%d.%dx (%s)\n",
   VAR_9, VAR_23/10, VAR_23%10, FUNC_16(VAR_22/1000));
retry_loop:
 FUNC_14();
 FUNC_7(VAR_25);

 VAR_27 = FUNC_4(0xA1);
 VAR_26 = FUNC_4(0x21);
 FUNC_10(0xFF, 0xA1);
 FUNC_10(0xFE, 0x21);


 if (VAR_6 && (VAR_11 & VAR_5
     || ((VAR_17 != ((void*)0)) && VAR_17->flags.bm_control))) {
  VAR_28 = FUNC_5(VAR_6);
  VAR_28 &= 1 << 4;
  while (VAR_28 && VAR_29) {
   FUNC_11(1 << 4, VAR_6);
   VAR_29--;
   VAR_28 = FUNC_5(VAR_6);
   VAR_28 &= 1 << 4;
  }
 }

 if (VAR_11 & VAR_5) {

  FUNC_10(3, 0x22);
 } else if ((VAR_17 != ((void*)0)) && VAR_17->flags.bm_control) {

  FUNC_0(VAR_0, 1);
 }
 switch (VAR_14) {





 case 130:
  FUNC_2(VAR_21);
  break;
 case 129:
 case 128:
  if (VAR_11 & VAR_4) {

   FUNC_0(VAR_1, 0);
   FUNC_3(VAR_8->address, VAR_21, VAR_30);
  } else {
   FUNC_3(0, VAR_21, VAR_30);
  }
  break;
 }

 if (VAR_11 & VAR_5) {

  FUNC_10(0, 0x22);
 } else if ((VAR_17 != ((void*)0)) && VAR_17->flags.bm_control) {

  FUNC_0(VAR_0, 0);
 }
 FUNC_10(VAR_27, 0xA1);
 FUNC_10(VAR_26, 0x21);

 FUNC_6(VAR_25);
 FUNC_15();

 VAR_24.new = FUNC_1(FUNC_8());

 if (FUNC_17(VAR_24.new != VAR_22)) {
  FUNC_13("Failed to set requested frequency!\n");




  if (!VAR_18) {
   FUNC_13("Enabling \"Ignore Revision ID\" option\n");
   VAR_18 = 1;
   FUNC_9(200);
   goto retry_loop;
  }




  if (VAR_11 & VAR_4) {
   FUNC_13("Disabling ACPI C3 support\n");
   VAR_11 &= ~VAR_4;
   if (VAR_18) {
    FUNC_13("Disabling \"Ignore Revision ID\" option\n");
    VAR_18 = 0;
   }
   FUNC_9(200);
   goto retry_loop;
  }




  if (VAR_14 == 129) {
   FUNC_13("Switching to Longhaul ver. 1\n");
   VAR_14 = 130;
   FUNC_9(200);
   goto retry_loop;
  }
 }

 if (!VAR_29) {
  FUNC_13("Warning: Timeout while waiting for idle PCI bus\n");
  return -VAR_2;
 }

 return 0;
}

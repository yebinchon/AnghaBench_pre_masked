
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vcpu_register_vcpu_info {int mfn; scalar_t__ offset; } ;
struct vcpu_info {int dummy; } ;
struct TYPE_2__ {struct vcpu_info* vcpu_info; } ;


 int * FUNC_0 (struct vcpu_info*) ;
 struct vcpu_info* FUNC_1 (int ) ;
 int FUNC_2 (struct vcpu_info*,struct vcpu_info*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ,int,struct vcpu_register_vcpu_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (scalar_t__,int ,int*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct vcpu_info*) ;
 int FUNC_13 () ;
 scalar_t__ VAR_8 ;
 int FUNC_14 () ;

__attribute__((used)) static void
FUNC_15(void)
{
 struct vcpu_register_vcpu_info VAR_9;
 struct vcpu_info *VAR_10;
 uint32_t VAR_11[4];
 int VAR_12, VAR_13;

 if (!FUNC_13())
  return;

 if (FUNC_0(VAR_10) != ((void*)0)) {





  return;
 }





 FUNC_5(VAR_5 != 0, ("Invalid base Xen CPUID leaf"));
 FUNC_8(VAR_5 + 4, 0, VAR_11);
 FUNC_5((VAR_11[0] & VAR_3) ||
     !FUNC_14(),
     ("Xen PV domain without vcpu_id in cpuid"));
 FUNC_7(VAR_6, (VAR_11[0] & VAR_3) ?
     VAR_11[1] : FUNC_6(VAR_4));

 if (VAR_8 && !FUNC_4()) {







  VAR_13 = FUNC_10(FUNC_6(VAR_6));
  if (VAR_13 != 0)
   FUNC_9("Event channel upcall vector setup failed: %d",
       VAR_13);
 }
 VAR_10 = FUNC_1(VAR_7);
 VAR_12 = FUNC_6(VAR_6);
 VAR_9.mfn = FUNC_12(VAR_10) >> VAR_1;
 VAR_9.offset = FUNC_12(VAR_10) - FUNC_11(FUNC_12(VAR_10));

 VAR_13 = FUNC_3(VAR_2, VAR_12, &VAR_9);
 if (VAR_13 != 0)
  FUNC_2(VAR_10, &VAR_0->vcpu_info[VAR_12]);
 else
  FUNC_2(VAR_10, VAR_10);
}

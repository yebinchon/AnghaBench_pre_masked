
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_2__ {scalar_t__ is_handlers; } ;
struct msi_intsrc {int msi_cpu; int msi_vector; int msi_irq; int msi_count; int msi_maxcount; void** msi_irqs; TYPE_1__ msi_intsrc; struct msi_intsrc* msi_first; int * msi_dev; void* msi_remap_cookie; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int*,int,int) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (int*,void**,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int *,void**) ;
 int VAR_6 ;
 int FUNC_5 (void**,int ) ;
 scalar_t__ FUNC_6 (int) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (int *,void**,int) ;
 void** FUNC_9 (int,int ,int ) ;
 int FUNC_10 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;
 int FUNC_13 (char*,int,int,int) ;

int
FUNC_14(device_t VAR_10, int VAR_11, int VAR_12, int *VAR_13)
{
 struct msi_intsrc *VAR_14, *VAR_15;
 u_int VAR_16, VAR_17, *VAR_18;
 int VAR_19, VAR_20, VAR_21;





 if (!VAR_7)
  return (VAR_1);

 if (FUNC_4(VAR_10, &VAR_17) != 0)
  VAR_17 = 0;

 if (VAR_11 > 1)
  VAR_18 = FUNC_9(VAR_11 * sizeof(*VAR_18), VAR_3, VAR_4);
 else
  VAR_18 = ((void*)0);
again:
 FUNC_11(&VAR_8);


 VAR_19 = 0;
 for (VAR_20 = VAR_6; VAR_20 < VAR_6 + VAR_9; VAR_20++) {
  VAR_14 = (struct msi_intsrc *)FUNC_6(VAR_20);


  if (VAR_14 == ((void*)0))
   break;


  if (VAR_14->msi_dev == ((void*)0)) {
   VAR_13[VAR_19] = VAR_20;
   VAR_19++;
   if (VAR_19 == VAR_11)
    break;
  }
 }


 if (VAR_19 < VAR_11) {

  if (VAR_20 + (VAR_11 - VAR_19) > VAR_6 + VAR_9) {
   FUNC_12(&VAR_8);
   FUNC_5(VAR_18, VAR_3);
   return (VAR_1);
  }
  FUNC_12(&VAR_8);


  while (VAR_19 < VAR_11) {
   FUNC_10();
   VAR_19++;
  }
  goto again;
 }


 FUNC_0(VAR_19 == VAR_11, ("count mismatch"));


 VAR_16 = FUNC_7(VAR_17);
 VAR_21 = FUNC_1(VAR_16, VAR_13, VAR_11, VAR_12);
 if (VAR_21 == 0) {
  FUNC_12(&VAR_8);
  FUNC_5(VAR_18, VAR_3);
  return (VAR_0);
 }
 VAR_15 = (struct msi_intsrc *)FUNC_6(VAR_13[0]);
 for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20++) {
  VAR_14 = (struct msi_intsrc *)FUNC_6(VAR_13[VAR_20]);
  VAR_14->msi_cpu = VAR_16;
  VAR_14->msi_dev = VAR_10;
  VAR_14->msi_vector = VAR_21 + VAR_20;
  if (VAR_5)
   FUNC_13(
      "msi: routing MSI IRQ %d to local APIC %u vector %u\n",
       VAR_14->msi_irq, VAR_14->msi_cpu, VAR_14->msi_vector);
  VAR_14->msi_first = VAR_15;
  FUNC_0(VAR_14->msi_intsrc.is_handlers == 0,
      ("dead MSI has handlers"));
 }
 VAR_15->msi_count = VAR_11;
 VAR_15->msi_maxcount = VAR_12;
 if (VAR_11 > 1)
  FUNC_3(VAR_13, VAR_18, VAR_11 * sizeof(*VAR_18));
 VAR_15->msi_irqs = VAR_18;
 FUNC_12(&VAR_8);
 return (0);
}

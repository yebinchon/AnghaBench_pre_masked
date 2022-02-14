
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ is_handlers; } ;
struct msi_intsrc {int msi_remap_cookie; int msi_irq; int msi_cpu; int msi_vector; int msi_msix; int msi_count; int msi_maxcount; TYPE_1__ msi_intsrc; int * msi_irqs; struct msi_intsrc* msi_first; int * msi_dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (char*,int,int,int) ;

int
FUNC_11(device_t VAR_8, int *VAR_9)
{
 struct msi_intsrc *VAR_10;
 u_int VAR_11, VAR_12;
 int VAR_13, VAR_14;





 if (!VAR_5)
  return (VAR_1);

 if (FUNC_3(VAR_8, &VAR_12) != 0)
  VAR_12 = 0;

again:
 FUNC_8(&VAR_6);


 for (VAR_13 = VAR_4; VAR_13 < VAR_4 + VAR_7; VAR_13++) {
  VAR_10 = (struct msi_intsrc *)FUNC_4(VAR_13);


  if (VAR_10 == ((void*)0))
   break;


  if (VAR_10->msi_dev == ((void*)0))
   break;
 }


 if (VAR_13 == VAR_4 + VAR_7) {
  FUNC_9(&VAR_6);
  return (VAR_1);
 }


 if (VAR_10 == ((void*)0)) {
  FUNC_9(&VAR_6);


  FUNC_7();
  goto again;
 }


 VAR_11 = FUNC_5(VAR_12);
 VAR_14 = FUNC_1(VAR_11, VAR_13);
 if (VAR_14 == 0) {
  FUNC_9(&VAR_6);
  return (VAR_0);
 }

 VAR_10->msi_dev = VAR_8;
 if (VAR_3)
  FUNC_10("msi: routing MSI-X IRQ %d to local APIC %u vector %u\n",
      VAR_10->msi_irq, VAR_11, VAR_14);


 VAR_10->msi_cpu = VAR_11;
 VAR_10->msi_first = VAR_10;
 VAR_10->msi_vector = VAR_14;
 VAR_10->msi_msix = 1;
 VAR_10->msi_count = 1;
 VAR_10->msi_maxcount = 1;
 VAR_10->msi_irqs = ((void*)0);

 FUNC_0(VAR_10->msi_intsrc.is_handlers == 0, ("dead MSI-X has handlers"));
 FUNC_9(&VAR_6);

 *VAR_9 = VAR_13;
 return (0);
}

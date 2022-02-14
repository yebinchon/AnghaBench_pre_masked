
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int misc_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_9 () ;
 int VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_10 ;
 int FUNC_14 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int *) ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;
 int VAR_17 ;
 int FUNC_21 () ;

__attribute__((used)) static int FUNC_22(void)
{
 int VAR_18;


 VAR_18 = FUNC_8();
 if (VAR_18 != 0) {
  FUNC_16("Unable to initialize the hypervisor - 0x%x\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_1(&VAR_5);
 if (VAR_18)
  return VAR_18;

 FUNC_10(VAR_17);

 VAR_18 = FUNC_13();
 if (VAR_18)
  goto err_alloc;

 VAR_18 = FUNC_11(VAR_4);
 if (VAR_18 < 0)
  goto err_alloc;





 VAR_18 = FUNC_4(VAR_0, "hyperv/vmbus:online",
    VAR_11, VAR_10);
 if (VAR_18 < 0)
  goto err_cpuhp;
 VAR_12 = VAR_18;

 VAR_18 = FUNC_20();
 if (VAR_18)
  goto err_connect;




 if (VAR_15.misc_features & VAR_3) {
  u64 VAR_19;




  VAR_6 = FUNC_18(VAR_9);
  if (!VAR_6)
   FUNC_16("Hyper-V: sysctl table register error");





  FUNC_7(VAR_19);
  if (VAR_19 & VAR_2) {
   VAR_8 = (void *)FUNC_6(VAR_1);
   if (VAR_8) {
    VAR_18 = FUNC_15(&VAR_7);
    if (VAR_18)
     FUNC_16("Hyper-V: kmsg dump register "
      "error 0x%x\n", VAR_18);
   } else
    FUNC_16("Hyper-V: panic message page memory "
     "allocation failed");
  }

  FUNC_17(&VAR_13);
  FUNC_0(&VAR_16,
            &VAR_14);
 }

 FUNC_21();

 return 0;

err_connect:
 FUNC_3(VAR_12);
err_cpuhp:
 FUNC_12();
err_alloc:
 FUNC_14();
 FUNC_9();

 FUNC_2(&VAR_5);
 FUNC_5((unsigned long)VAR_8);
 FUNC_19(VAR_6);
 VAR_6 = ((void*)0);
 return VAR_18;
}

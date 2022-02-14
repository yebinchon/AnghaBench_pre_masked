
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct imc_pmu {int domain; TYPE_1__ pmu; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct imc_pmu*) ;
 int FUNC_5 (struct imc_pmu*) ;
 int FUNC_6 (struct imc_pmu*,struct device_node*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_11 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct device_node*,struct imc_pmu*) ;
 int FUNC_17 (struct imc_pmu*) ;

int FUNC_18(struct device_node *VAR_5, struct imc_pmu *VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_6(VAR_6, VAR_5, VAR_7);
 if (VAR_8)
  goto err_free_mem;

 switch (VAR_6->domain) {
 case 130:






  FUNC_9(&VAR_2);
  if (VAR_3 == 0) {
   VAR_8 = FUNC_7();
   if (VAR_8) {
    FUNC_10(&VAR_2);
    FUNC_8(VAR_4);
    VAR_4 = ((void*)0);
    goto err_free_mem;
   }

   VAR_8 = FUNC_11();
   if (VAR_8) {
    FUNC_10(&VAR_2);
    FUNC_8(VAR_1);
    FUNC_8(VAR_4);
    VAR_4 = ((void*)0);
    goto err_free_mem;
   }
  }
  VAR_3++;
  FUNC_10(&VAR_2);
  break;
 case 131:
  VAR_8 = FUNC_3();
  if (VAR_8) {
   FUNC_0();
   goto err_free_mem;
  }

  break;
 case 129:
  VAR_8 = FUNC_14();
  if (VAR_8) {
   FUNC_1();
   goto err_free_mem;
  }

  break;
 case 128:
  VAR_8 = FUNC_15();
  if (VAR_8) {
   FUNC_2();
   goto err_free_mem;
  }

  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_16(VAR_5, VAR_6);
 if (VAR_8)
  goto err_free_cpuhp_mem;

 VAR_8 = FUNC_17(VAR_6);
 if (VAR_8)
  goto err_free_cpuhp_mem;

 VAR_8 = FUNC_12(&VAR_6->pmu, VAR_6->pmu.name, -1);
 if (VAR_8)
  goto err_free_cpuhp_mem;

 FUNC_13("%s performance monitor hardware support registered\n",
       VAR_6->pmu.name);

 return 0;

err_free_cpuhp_mem:
 FUNC_4(VAR_6);
err_free_mem:
 FUNC_5(VAR_6);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct smu7_hwmgr {int vddci_leakage; int vddc_leakage; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct phm_clock_and_voltage_limits {void* vddci; void* vddc; } ;


 int FUNC_0 (struct pp_hwmgr*,void**,int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
      struct phm_clock_and_voltage_limits *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_0->backend);

 if (VAR_1) {
  VAR_2 = VAR_1->vddc;
  FUNC_0(VAR_0, &VAR_2,
         &VAR_4->vddc_leakage);
  VAR_1->vddc = VAR_2;
  VAR_3 = VAR_1->vddci;
  FUNC_0(VAR_0, &VAR_3,
         &VAR_4->vddci_leakage);
  VAR_1->vddci = VAR_3;
 }

 return 0;
}

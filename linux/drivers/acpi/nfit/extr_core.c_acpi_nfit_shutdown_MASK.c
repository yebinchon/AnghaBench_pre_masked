
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_nfit_desc {int init_mutex; int dwork; int scrub_flags; int list; int nvdimm_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;
 struct device* FUNC_8 (int ) ;

void FUNC_9(void *VAR_3)
{
 struct acpi_nfit_desc *VAR_4 = VAR_3;
 struct device *VAR_5 = FUNC_8(VAR_4->nvdimm_bus);





 FUNC_3(&VAR_1);
 FUNC_2(&VAR_4->list);
 FUNC_4(&VAR_1);

 FUNC_3(&VAR_4->init_mutex);
 FUNC_7(VAR_0, &VAR_4->scrub_flags);
 FUNC_0(&VAR_4->dwork);
 FUNC_4(&VAR_4->init_mutex);






 FUNC_5(VAR_5);
 FUNC_6(VAR_5);

 FUNC_1(VAR_2);
}

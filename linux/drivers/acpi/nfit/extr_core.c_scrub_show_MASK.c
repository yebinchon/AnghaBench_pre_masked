
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int scrub_count; int scrub_tmo; int init_mutex; int dwork; int scrub_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct nvdimm_bus_descriptor* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int VAR_6 ;
 int FUNC_7 (char*,char*,int,char*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct acpi_nfit_desc* FUNC_10 (struct nvdimm_bus_descriptor*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_7,
  struct device_attribute *VAR_8, char *VAR_9)
{
 struct nvdimm_bus_descriptor *VAR_10;
 struct acpi_nfit_desc *VAR_11;
 ssize_t VAR_12 = -VAR_4;
 bool VAR_13;

 FUNC_5(VAR_7);
 VAR_10 = FUNC_1(VAR_7);
 if (!VAR_10) {
  FUNC_6(VAR_7);
  return VAR_12;
 }
 VAR_11 = FUNC_10(VAR_10);

 FUNC_3(&VAR_11->init_mutex);
 VAR_13 = FUNC_9(VAR_0, &VAR_11->scrub_flags)
  && !FUNC_9(VAR_1, &VAR_11->scrub_flags);
 VAR_12 = FUNC_7(VAR_9, "%d%s", VAR_11->scrub_count, VAR_13 ? "+\n" : "\n");

 if (VAR_13 && FUNC_0(VAR_3) && !FUNC_8(VAR_2,
    &VAR_11->scrub_flags)) {
  VAR_11->scrub_tmo = 1;
  FUNC_2(VAR_6, &VAR_11->dwork, VAR_5);
 }

 FUNC_4(&VAR_11->init_mutex);
 FUNC_6(VAR_7);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvdimm {int dummy; } ;
struct nfit_mem {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (struct nfit_mem*) ;
 struct nfit_mem* FUNC_1 (struct nvdimm*) ;
 int FUNC_2 (char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct nvdimm* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_8,
  struct device_attribute *VAR_9, char *VAR_10)
{
 struct nvdimm *VAR_11 = FUNC_4(VAR_8);
 struct nfit_mem *VAR_12 = FUNC_1(VAR_11);
 u16 VAR_13 = FUNC_0(VAR_12)->flags;

 if (FUNC_3(VAR_7, &VAR_12->flags))
  VAR_13 |= VAR_0;

 return FUNC_2(VAR_10, "%s%s%s%s%s%s%s\n",
  VAR_13 & VAR_6 ? "save_fail " : "",
  VAR_13 & VAR_5 ? "restore_fail " : "",
  VAR_13 & VAR_0 ? "flush_fail " : "",
  VAR_13 & VAR_4 ? "not_armed " : "",
  VAR_13 & VAR_2 ? "smart_event " : "",
  VAR_13 & VAR_3 ? "map_fail " : "",
  VAR_13 & VAR_1 ? "smart_notify " : "");
}

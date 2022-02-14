
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int provider_name; int attr_groups; int of_node; int module; int ndctl; } ;
struct papr_scm_priv {int blocks; int block_size; TYPE_2__ bus_desc; int bus; int dn; int region; scalar_t__ is_volatile; int nd_set; int res; TYPE_1__* pdev; scalar_t__ nvdimm; } ;
struct nd_region_desc {int size; int numa_node; int target_node; int num_mappings; unsigned long flags; int * res; int * nd_set; struct nd_region_desc* mapping; struct papr_scm_priv* provider_data; int of_node; int attr_groups; scalar_t__ start; scalar_t__ nvdimm; } ;
struct nd_mapping_desc {int size; int numa_node; int target_node; int num_mappings; unsigned long flags; int * res; int * nd_set; struct nd_mapping_desc* mapping; struct papr_scm_priv* provider_data; int of_node; int attr_groups; scalar_t__ start; scalar_t__ nvdimm; } ;
struct device {int of_node; } ;
typedef int ndr_desc ;
typedef int mapping ;
struct TYPE_3__ {struct device dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int *,...) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nd_region_desc*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,struct papr_scm_priv*,int ,unsigned long,int ,int ,int *) ;
 int FUNC_10 (int ,struct nd_region_desc*) ;
 int FUNC_11 (int ,struct nd_region_desc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int) ;
 int VAR_10 ;
 int FUNC_13 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_14(struct papr_scm_priv *VAR_11)
{
 struct device *VAR_12 = &VAR_11->pdev->dev;
 struct nd_mapping_desc VAR_13;
 struct nd_region_desc VAR_14;
 unsigned long VAR_15;
 int VAR_16, VAR_17;

 VAR_11->bus_desc.ndctl = VAR_9;
 VAR_11->bus_desc.module = VAR_6;
 VAR_11->bus_desc.of_node = VAR_11->pdev->dev.of_node;
 VAR_11->bus_desc.attr_groups = VAR_7;
 VAR_11->bus_desc.provider_name = FUNC_4(VAR_11->pdev->name, VAR_2);

 if (!VAR_11->bus_desc.provider_name)
  return -VAR_0;

 VAR_11->bus = FUNC_7(((void*)0), &VAR_11->bus_desc);
 if (!VAR_11->bus) {
  FUNC_0(VAR_12, "Error creating nvdimm bus %pOF\n", &VAR_11->dn);
  return -VAR_1;
 }

 VAR_15 = 0;
 FUNC_13(VAR_3, &VAR_15);

 VAR_11->nvdimm = FUNC_9(VAR_11->bus, VAR_11, VAR_8,
    VAR_15, VAR_5, 0, ((void*)0));
 if (!VAR_11->nvdimm) {
  FUNC_0(VAR_12, "Error creating DIMM object for %pOF\n", &VAR_11->dn);
  goto err;
 }

 if (FUNC_6(VAR_11->bus, 1))
  goto err;



 FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.nvdimm = VAR_11->nvdimm;
 VAR_13.start = 0;
 VAR_13.size = VAR_11->blocks * VAR_11->block_size;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.attr_groups = VAR_10;
 VAR_16 = FUNC_2(&VAR_11->pdev->dev);
 VAR_17 = FUNC_12(VAR_16);
 VAR_14.numa_node = VAR_17;
 VAR_14.target_node = VAR_16;
 VAR_14.res = &VAR_11->res;
 VAR_14.of_node = VAR_11->dn;
 VAR_14.provider_data = VAR_11;
 VAR_14.mapping = &VAR_13;
 VAR_14.num_mappings = 1;
 VAR_14.nd_set = &VAR_11->nd_set;
 FUNC_13(VAR_4, &VAR_14.flags);

 if (VAR_11->is_volatile)
  VAR_11->region = FUNC_11(VAR_11->bus, &VAR_14);
 else
  VAR_11->region = FUNC_10(VAR_11->bus, &VAR_14);
 if (!VAR_11->region) {
  FUNC_0(VAR_12, "Error registering region %pR from %pOF\n",
    VAR_14.res, VAR_11->dn);
  goto err;
 }
 if (VAR_16 != VAR_17)
  FUNC_1(VAR_12, "Region registered with target node %d and online node %d",
    VAR_16, VAR_17);

 return 0;

err: FUNC_8(VAR_11->bus);
 FUNC_3(VAR_11->bus_desc.provider_name);
 return -VAR_1;
}

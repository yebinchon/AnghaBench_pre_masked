
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_pportdata {int pport_kobj; int sl2vl_kobj; int diagc_kobj; int pport_cc_kobj; int congestion_entries_shadow; } ;
struct qib_devdata {int num_pports; int unit; int pcidev; struct qib_pportdata* pport; } ;
struct kobject {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qib_devdata* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int *,int *,struct kobject*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct qib_devdata*,char*,int,...) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct ib_device *VAR_9, u8 VAR_10,
     struct kobject *VAR_11)
{
 struct qib_pportdata *VAR_12;
 struct qib_devdata *VAR_13 = FUNC_0(VAR_9);
 int VAR_14;

 if (!VAR_10 || VAR_10 > VAR_13->num_pports) {
  FUNC_4(VAR_13,
   "Skipping infiniband class with invalid port %u\n",
   VAR_10);
  VAR_14 = -VAR_0;
  goto bail;
 }
 VAR_12 = &VAR_13->pport[VAR_10 - 1];

 VAR_14 = FUNC_1(&VAR_12->pport_kobj, &VAR_7, VAR_11,
       "linkcontrol");
 if (VAR_14) {
  FUNC_4(VAR_13,
   "Skipping linkcontrol sysfs info, (err %d) port %u\n",
   VAR_14, VAR_10);
  goto bail;
 }
 FUNC_3(&VAR_12->pport_kobj, VAR_1);

 VAR_14 = FUNC_1(&VAR_12->sl2vl_kobj, &VAR_8, VAR_11,
       "sl2vl");
 if (VAR_14) {
  FUNC_4(VAR_13,
   "Skipping sl2vl sysfs info, (err %d) port %u\n",
   VAR_14, VAR_10);
  goto bail_link;
 }
 FUNC_3(&VAR_12->sl2vl_kobj, VAR_1);

 VAR_14 = FUNC_1(&VAR_12->diagc_kobj, &VAR_5, VAR_11,
       "diag_counters");
 if (VAR_14) {
  FUNC_4(VAR_13,
   "Skipping diag_counters sysfs info, (err %d) port %u\n",
   VAR_14, VAR_10);
  goto bail_sl;
 }
 FUNC_3(&VAR_12->diagc_kobj, VAR_1);

 if (!VAR_4 || !VAR_12->congestion_entries_shadow)
  return 0;

 VAR_14 = FUNC_1(&VAR_12->pport_cc_kobj, &VAR_6,
    VAR_11, "CCMgtA");
 if (VAR_14) {
  FUNC_4(VAR_13,
   "Skipping Congestion Control sysfs info, (err %d) port %u\n",
   VAR_14, VAR_10);
  goto bail_diagc;
 }

 FUNC_3(&VAR_12->pport_cc_kobj, VAR_1);

 VAR_14 = FUNC_6(&VAR_12->pport_cc_kobj,
    &VAR_2);
 if (VAR_14) {
  FUNC_4(VAR_13,
   "Skipping Congestion Control setting sysfs info, (err %d) port %u\n",
   VAR_14, VAR_10);
  goto bail_cc;
 }

 VAR_14 = FUNC_6(&VAR_12->pport_cc_kobj,
    &VAR_3);
 if (VAR_14) {
  FUNC_4(VAR_13,
   "Skipping Congestion Control table sysfs info, (err %d) port %u\n",
   VAR_14, VAR_10);
  goto bail_cc_entry_bin;
 }

 FUNC_5(VAR_13->pcidev,
  "IB%u: Congestion Control Agent enabled for port %d\n",
  VAR_13->unit, VAR_10);

 return 0;

bail_cc_entry_bin:
 FUNC_7(&VAR_12->pport_cc_kobj, &VAR_2);
bail_cc:
 FUNC_2(&VAR_12->pport_cc_kobj);
bail_diagc:
 FUNC_2(&VAR_12->diagc_kobj);
bail_sl:
 FUNC_2(&VAR_12->sl2vl_kobj);
bail_link:
 FUNC_2(&VAR_12->pport_kobj);
bail:
 return VAR_14;
}

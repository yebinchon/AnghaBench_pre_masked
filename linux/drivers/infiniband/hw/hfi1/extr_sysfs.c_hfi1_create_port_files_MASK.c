
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kobject {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int sc2vl_kobj; int sl2sc_kobj; int vl2mtu_kobj; int pport_cc_kobj; } ;
struct hfi1_devdata {int num_pports; struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int,...) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,struct kobject*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_7 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct ib_device *VAR_8, u8 VAR_9,
      struct kobject *VAR_10)
{
 struct hfi1_pportdata *VAR_11;
 struct hfi1_devdata *VAR_12 = FUNC_2(VAR_8);
 int VAR_13;

 if (!VAR_9 || VAR_9 > VAR_12->num_pports) {
  FUNC_0(VAR_12,
      "Skipping infiniband class with invalid port %u\n",
      VAR_9);
  return -VAR_0;
 }
 VAR_11 = &VAR_12->pport[VAR_9 - 1];

 VAR_13 = FUNC_3(&VAR_11->sc2vl_kobj, &VAR_4, VAR_10,
       "sc2vl");
 if (VAR_13) {
  FUNC_0(VAR_12,
      "Skipping sc2vl sysfs info, (err %d) port %u\n",
      VAR_13, VAR_9);
  goto bail;
 }
 FUNC_5(&VAR_11->sc2vl_kobj, VAR_1);

 VAR_13 = FUNC_3(&VAR_11->sl2sc_kobj, &VAR_5, VAR_10,
       "sl2sc");
 if (VAR_13) {
  FUNC_0(VAR_12,
      "Skipping sl2sc sysfs info, (err %d) port %u\n",
      VAR_13, VAR_9);
  goto bail_sc2vl;
 }
 FUNC_5(&VAR_11->sl2sc_kobj, VAR_1);

 VAR_13 = FUNC_3(&VAR_11->vl2mtu_kobj, &VAR_6, VAR_10,
       "vl2mtu");
 if (VAR_13) {
  FUNC_0(VAR_12,
      "Skipping vl2mtu sysfs info, (err %d) port %u\n",
      VAR_13, VAR_9);
  goto bail_sl2sc;
 }
 FUNC_5(&VAR_11->vl2mtu_kobj, VAR_1);

 VAR_13 = FUNC_3(&VAR_11->pport_cc_kobj, &VAR_7,
       VAR_10, "CCMgtA");
 if (VAR_13) {
  FUNC_0(VAR_12,
      "Skipping Congestion Control sysfs info, (err %d) port %u\n",
      VAR_13, VAR_9);
  goto bail_vl2mtu;
 }

 FUNC_5(&VAR_11->pport_cc_kobj, VAR_1);

 VAR_13 = FUNC_6(&VAR_11->pport_cc_kobj, &VAR_2);
 if (VAR_13) {
  FUNC_0(VAR_12,
      "Skipping Congestion Control setting sysfs info, (err %d) port %u\n",
      VAR_13, VAR_9);
  goto bail_cc;
 }

 VAR_13 = FUNC_6(&VAR_11->pport_cc_kobj, &VAR_3);
 if (VAR_13) {
  FUNC_0(VAR_12,
      "Skipping Congestion Control table sysfs info, (err %d) port %u\n",
      VAR_13, VAR_9);
  goto bail_cc_entry_bin;
 }

 FUNC_1(VAR_12,
      "Congestion Control Agent enabled for port %d\n",
      VAR_9);

 return 0;

bail_cc_entry_bin:
 FUNC_7(&VAR_11->pport_cc_kobj,
         &VAR_2);
bail_cc:
 FUNC_4(&VAR_11->pport_cc_kobj);
bail_vl2mtu:
 FUNC_4(&VAR_11->vl2mtu_kobj);
bail_sl2sc:
 FUNC_4(&VAR_11->sl2sc_kobj);
bail_sc2vl:
 FUNC_4(&VAR_11->sc2vl_kobj);
bail:
 return VAR_13;
}

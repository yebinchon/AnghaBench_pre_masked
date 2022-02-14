
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct hfi1_pportdata {int unit; int num_pports; struct hfi1_pportdata* pport; int hfi1_ibdev_link; struct dentry* hfi1_ibdev_dbg; } ;
struct hfi1_ibdev {int unit; int num_pports; struct hfi1_ibdev* pport; int hfi1_ibdev_link; struct dentry* hfi1_ibdev_dbg; } ;
struct hfi1_devdata {int unit; int num_pports; struct hfi1_devdata* pport; int hfi1_ibdev_link; struct dentry* hfi1_ibdev_dbg; } ;
struct dentry {int dummy; } ;
typedef int name ;
typedef int link ;
struct TYPE_14__ {int write; } ;
struct TYPE_13__ {char* name; TYPE_2__ ops; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 char* FUNC_1 () ;
 TYPE_1__* VAR_10 ;
 struct hfi1_pportdata* FUNC_2 (struct hfi1_pportdata*) ;
 struct dentry* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,struct dentry*,struct hfi1_pportdata*,TYPE_2__*) ;
 int FUNC_5 (char*,int ,char*) ;
 int VAR_11 ;
 int FUNC_6 (struct hfi1_pportdata*) ;
 TYPE_1__* VAR_12 ;
 int FUNC_7 (char*,int,char*,...) ;

void FUNC_8(struct hfi1_ibdev *VAR_13)
{
 char VAR_14[sizeof("port0counters") + 1];
 char VAR_15[10];
 struct hfi1_devdata *VAR_16 = FUNC_2(VAR_13);
 struct hfi1_pportdata *VAR_17;
 struct dentry *VAR_18;
 int VAR_19 = VAR_16->unit;
 int VAR_20, VAR_21;

 if (!VAR_11)
  return;
 FUNC_7(VAR_14, sizeof(VAR_14), "%s_%d", FUNC_1(), VAR_19);
 FUNC_7(VAR_15, sizeof(VAR_15), "%d", VAR_19);
 VAR_18 = FUNC_3(VAR_14, VAR_11);
 VAR_13->hfi1_ibdev_dbg = VAR_18;

 VAR_13->hfi1_ibdev_link =
  FUNC_5(VAR_15, VAR_11, VAR_14);

 FUNC_4("opcode_stats", 0444, VAR_18, VAR_13,
       &VAR_3);
 FUNC_4("tx_opcode_stats", 0444, VAR_18, VAR_13,
       &VAR_9);
 FUNC_4("ctx_stats", 0444, VAR_18, VAR_13, &VAR_2);
 FUNC_4("qp_stats", 0444, VAR_18, VAR_13, &VAR_5);
 FUNC_4("sdes", 0444, VAR_18, VAR_13, &VAR_7);
 FUNC_4("rcds", 0444, VAR_18, VAR_13, &VAR_6);
 FUNC_4("pios", 0444, VAR_18, VAR_13, &VAR_4);
 FUNC_4("sdma_cpu_list", 0444, VAR_18, VAR_13,
       &VAR_8);


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_10); VAR_20++)
  FUNC_4(VAR_10[VAR_20].name, 0444, VAR_18, VAR_16,
        &VAR_10[VAR_20].ops);


 for (VAR_17 = VAR_16->pport, VAR_21 = 0; VAR_21 < VAR_16->num_pports; VAR_21++, VAR_17++)
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++) {
   FUNC_7(VAR_14,
     sizeof(VAR_14),
     VAR_12[VAR_20].name,
     VAR_21 + 1);
   FUNC_4(VAR_14,
         !VAR_12[VAR_20].ops.write ?
          VAR_0 :
          VAR_0 | VAR_1,
         VAR_18, VAR_17, &VAR_12[VAR_20].ops);
  }

 FUNC_6(VAR_13);
}

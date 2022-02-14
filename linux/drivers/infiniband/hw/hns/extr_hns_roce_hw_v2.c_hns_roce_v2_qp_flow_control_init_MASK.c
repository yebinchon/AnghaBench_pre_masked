
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_sccc_clr_done {scalar_t__ clr_done; } ;
struct hns_roce_sccc_clr {int qpn; } ;
struct hns_roce_qp {int qpn; } ;
struct TYPE_2__ {int scc_mutex; } ;
struct hns_roce_dev {TYPE_1__ qp_table; int dev; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_3 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_5,
      struct hns_roce_qp *VAR_6)
{
 struct hns_roce_sccc_clr_done *VAR_7;
 struct hns_roce_sccc_clr *VAR_8;
 struct hns_roce_cmq_desc VAR_9;
 int VAR_10, VAR_11;

 FUNC_5(&VAR_5->qp_table.scc_mutex);


 FUNC_3(&VAR_9, VAR_4, 0);
 VAR_10 = FUNC_2(VAR_5, &VAR_9, 1);
 if (VAR_10) {
  FUNC_1(VAR_5->dev, "Reset SCC ctx  failed(%d)\n", VAR_10);
  goto out;
 }


 FUNC_3(&VAR_9, VAR_2, 0);
 VAR_8 = (struct hns_roce_sccc_clr *)VAR_9.data;
 VAR_8->qpn = FUNC_0(VAR_6->qpn);
 VAR_10 = FUNC_2(VAR_5, &VAR_9, 1);
 if (VAR_10) {
  FUNC_1(VAR_5->dev, "Clear SCC ctx failed(%d)\n", VAR_10);
  goto out;
 }


 VAR_7 = (struct hns_roce_sccc_clr_done *)VAR_9.data;
 for (VAR_11 = 0; VAR_11 <= VAR_1; VAR_11++) {
  FUNC_3(&VAR_9,
           VAR_3, 1);
  VAR_10 = FUNC_2(VAR_5, &VAR_9, 1);
  if (VAR_10) {
   FUNC_1(VAR_5->dev, "Query clr cmq failed(%d)\n", VAR_10);
   goto out;
  }

  if (VAR_7->clr_done)
   goto out;

  FUNC_4(20);
 }

 FUNC_1(VAR_5->dev, "Query SCC clr done flag overtime.\n");
 VAR_10 = -VAR_0;

out:
 FUNC_6(&VAR_5->qp_table.scc_mutex);
 return VAR_10;
}

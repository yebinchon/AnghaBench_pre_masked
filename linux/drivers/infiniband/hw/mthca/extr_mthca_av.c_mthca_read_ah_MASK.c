
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mthca_dev {int dummy; } ;
struct TYPE_9__ {TYPE_2__* sgid_attr; } ;
struct mthca_ah {scalar_t__ type; TYPE_6__* av; TYPE_3__ ibah; } ;
struct TYPE_10__ {int raw; } ;
struct TYPE_11__ {int traffic_class; int flow_label; TYPE_4__ destination_gid; int source_gid; int hop_limit; } ;
struct TYPE_7__ {int service_level; int source_lid; int destination_lid; } ;
struct ib_ud_header {TYPE_5__ grh; TYPE_1__ lrh; } ;
struct TYPE_12__ {int sl_tclass_flowlabel; int g_slid; int dgid; int hop_limit; int dlid; } ;
struct TYPE_8__ {int gid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct mthca_ah*) ;

int FUNC_5(struct mthca_dev *VAR_2, struct mthca_ah *VAR_3,
    struct ib_ud_header *VAR_4)
{
 if (VAR_3->type == VAR_1)
  return -VAR_0;

 VAR_4->lrh.service_level = FUNC_0(VAR_3->av->sl_tclass_flowlabel) >> 28;
 VAR_4->lrh.destination_lid = VAR_3->av->dlid;
 VAR_4->lrh.source_lid = FUNC_1(VAR_3->av->g_slid & 0x7f);
 if (FUNC_4(VAR_3)) {
  VAR_4->grh.traffic_class =
   (FUNC_0(VAR_3->av->sl_tclass_flowlabel) >> 20) & 0xff;
  VAR_4->grh.flow_label =
   VAR_3->av->sl_tclass_flowlabel & FUNC_2(0xfffff);
  VAR_4->grh.hop_limit = VAR_3->av->hop_limit;
  VAR_4->grh.source_gid = VAR_3->ibah.sgid_attr->gid;
  FUNC_3(VAR_4->grh.destination_gid.raw,
         VAR_3->av->dgid, 16);
 }

 return 0;
}

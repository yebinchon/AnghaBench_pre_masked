
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xen_drm_front_cfg {int num_connectors; TYPE_2__* connectors; } ;
struct xen_drm_front_info {int xb_dev; TYPE_1__* evt_pairs; struct xen_drm_front_cfg cfg; } ;
struct TYPE_4__ {int xenstore_path; } ;
struct TYPE_3__ {int evt; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xenbus_transaction,int *,int ,int ,int ) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct xenbus_transaction,int) ;
 int FUNC_3 (struct xenbus_transaction*) ;

int FUNC_4(struct xen_drm_front_info *VAR_5)
{
 struct xenbus_transaction VAR_6;
 struct xen_drm_front_cfg *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = &VAR_5->cfg;

again:
 VAR_8 = FUNC_3(&VAR_6);
 if (VAR_8 < 0) {
  FUNC_1(VAR_5->xb_dev, VAR_8,
     "starting transaction");
  return VAR_8;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->num_connectors; VAR_9++) {
  VAR_8 = FUNC_0(VAR_6, &VAR_5->evt_pairs[VAR_9].req,
          VAR_7->connectors[VAR_9].xenstore_path,
          VAR_4,
          VAR_3);
  if (VAR_8 < 0)
   goto fail;

  VAR_8 = FUNC_0(VAR_6, &VAR_5->evt_pairs[VAR_9].evt,
          VAR_7->connectors[VAR_9].xenstore_path,
          VAR_2,
          VAR_1);
  if (VAR_8 < 0)
   goto fail;
 }

 VAR_8 = FUNC_2(VAR_6, 0);
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_0)
   goto again;

  FUNC_1(VAR_5->xb_dev, VAR_8,
     "completing transaction");
  goto fail_to_end;
 }

 return 0;

fail:
 FUNC_2(VAR_6, 1);

fail_to_end:
 FUNC_1(VAR_5->xb_dev, VAR_8, "writing Xen store");
 return VAR_8;
}

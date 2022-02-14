
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xendispl_event_page {int dummy; } ;
struct xenbus_device {int devicetype; int otherend_id; } ;
struct xen_drm_front_info {struct xenbus_device* xb_dev; } ;
struct TYPE_6__ {struct xendispl_event_page* page; } ;
struct TYPE_8__ {int * sring; } ;
struct TYPE_5__ {TYPE_4__ ring; int req_io_lock; int completion; } ;
struct TYPE_7__ {TYPE_2__ evt; TYPE_1__ req; } ;
struct xen_drm_front_evtchnl {int type; int index; int gref; int irq; int port; TYPE_3__ u; int state; struct xen_drm_front_info* front_info; } ;
struct xen_displif_sring {int dummy; } ;
typedef int irq_handler_t ;
typedef int grant_ref_t ;
typedef enum xen_drm_front_evtchnl_type { ____Placeholder_xen_drm_front_evtchnl_type } xen_drm_front_evtchnl_type ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,struct xen_displif_sring*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct xen_displif_sring*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ,struct xen_drm_front_evtchnl*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xen_drm_front_evtchnl*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (struct xenbus_device*,int *) ;
 int FUNC_12 (struct xenbus_device*,struct xen_displif_sring*,int,int*) ;

__attribute__((used)) static int FUNC_13(struct xen_drm_front_info *VAR_9, int VAR_10,
    struct xen_drm_front_evtchnl *VAR_11,
    enum xen_drm_front_evtchnl_type VAR_12)
{
 struct xenbus_device *VAR_13 = VAR_9->xb_dev;
 unsigned long VAR_14;
 grant_ref_t VAR_15;
 irq_handler_t VAR_16;
 int VAR_17;

 FUNC_8(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->type = VAR_12;
 VAR_11->index = VAR_10;
 VAR_11->front_info = VAR_9;
 VAR_11->state = VAR_1;
 VAR_11->gref = VAR_4;

 VAR_14 = FUNC_5(VAR_3 | VAR_6);
 if (!VAR_14) {
  VAR_17 = -VAR_0;
  goto fail;
 }

 if (VAR_12 == VAR_2) {
  struct xen_displif_sring *VAR_18;

  FUNC_7(&VAR_11->u.req.completion);
  FUNC_9(&VAR_11->u.req.req_io_lock);
  VAR_18 = (struct xen_displif_sring *)VAR_14;
  FUNC_2(VAR_18);
  FUNC_1(&VAR_11->u.req.ring, VAR_18, VAR_5);

  VAR_17 = FUNC_12(VAR_13, VAR_18, 1, &VAR_15);
  if (VAR_17 < 0) {
   VAR_11->u.req.ring.sring = ((void*)0);
   FUNC_4(VAR_14);
   goto fail;
  }

  VAR_16 = VAR_7;
 } else {
  VAR_17 = FUNC_6(VAR_13->otherend_id,
        FUNC_10((void *)VAR_14), 0);
  if (VAR_17 < 0) {
   FUNC_4(VAR_14);
   goto fail;
  }

  VAR_11->u.evt.page = (struct xendispl_event_page *)VAR_14;
  VAR_15 = VAR_17;
  VAR_16 = VAR_8;
 }
 VAR_11->gref = VAR_15;

 VAR_17 = FUNC_11(VAR_13, &VAR_11->port);
 if (VAR_17 < 0)
  goto fail;

 VAR_17 = FUNC_3(VAR_11->port,
     VAR_16, 0, VAR_13->devicetype,
     VAR_11);
 if (VAR_17 < 0)
  goto fail;

 VAR_11->irq = VAR_17;
 return 0;

fail:
 FUNC_0("Failed to allocate ring: %d\n", VAR_17);
 return VAR_17;
}

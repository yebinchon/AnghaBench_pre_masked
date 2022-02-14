
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenbusb_softc {int xbs_lock; int xbs_connecting_children; int xbs_node; } ;
struct TYPE_4__ {uintptr_t callback_data; int callback; void* node; } ;
struct TYPE_3__ {char* node; uintptr_t callback_data; int callback; } ;
struct xenbus_device_ivars {int xd_state; char* xd_otherend_path; int * xd_dev; TYPE_2__ xd_local_watch; void* xd_node; TYPE_1__ xd_otherend_watch; int xd_otherend_path_len; void* xd_type; int xd_node_len; int xd_flags; int xd_lock; } ;
struct sbuf {int dummy; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct xenbus_device_ivars*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *,int *,int) ;
 struct xenbusb_softc* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct xenbus_device_ivars*) ;
 void* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 struct sbuf* FUNC_11 () ;
 int FUNC_12 (struct sbuf*,char*,int ,char const*,char const*) ;
 int FUNC_13 (char*,char*,char*) ;
 void* FUNC_14 (char const*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (int *,char*) ;
 int FUNC_19 (struct xenbus_device_ivars*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_20 (int ,char*,char*) ;

int
FUNC_21(device_t VAR_9, const char *VAR_10, const char *VAR_11)
{
 struct xenbusb_softc *VAR_12;
 struct sbuf *VAR_13;
 char *VAR_14;
 struct xenbus_device_ivars *VAR_15;
 int VAR_16;

 VAR_12 = FUNC_2(VAR_9);
 VAR_13 = FUNC_11();
 FUNC_12(VAR_13, "%s/%s/%s", VAR_12->xbs_node, VAR_10, VAR_11);
 FUNC_10(VAR_13);
 VAR_14 = FUNC_8(VAR_13);

 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_2, VAR_3|VAR_1);
 VAR_16 = VAR_0;

 if (FUNC_20(VAR_5, VAR_14, "") != 0) {
  device_t VAR_17;
  enum xenbus_state VAR_18;
  char *VAR_19;

  VAR_17 = FUNC_18(VAR_9, VAR_14);
  if (VAR_17 != ((void*)0)) {



   VAR_16 = 0;
   goto out;
  }

  VAR_18 = FUNC_17(VAR_14);
  if (VAR_18 != VAR_6) {





   FUNC_7("xenbusb_add_device: Device %s ignored. "
          "State %d\n", VAR_14, VAR_18);
   VAR_16 = 0;
   goto out;
  }

  FUNC_16(&VAR_15->xd_lock, "xdlock");
  VAR_15->xd_flags = VAR_4;
  VAR_15->xd_node = FUNC_14(VAR_14, VAR_2);
  VAR_15->xd_node_len = FUNC_15(VAR_14);
  VAR_15->xd_type = FUNC_14(VAR_10, VAR_2);
  VAR_15->xd_state = VAR_6;

  VAR_16 = FUNC_0(VAR_9, VAR_15);
  if (VAR_16) {
   FUNC_7("xenbus_update_device: %s no otherend id\n",
       VAR_14);
   goto out;
  }

  VAR_19 = FUNC_4(VAR_15->xd_otherend_path_len
      + FUNC_15("/state") + 1, VAR_2, VAR_1);
  FUNC_13(VAR_19, "%s/state", VAR_15->xd_otherend_path);
  VAR_15->xd_otherend_watch.node = VAR_19;
  VAR_15->xd_otherend_watch.callback = VAR_8;
  VAR_15->xd_otherend_watch.callback_data = (uintptr_t)VAR_15;

  VAR_15->xd_local_watch.node = VAR_15->xd_node;
  VAR_15->xd_local_watch.callback = VAR_7;
  VAR_15->xd_local_watch.callback_data = (uintptr_t)VAR_15;

  FUNC_5(&VAR_12->xbs_lock);
  VAR_12->xbs_connecting_children++;
  FUNC_6(&VAR_12->xbs_lock);

  VAR_17 = FUNC_1(VAR_9, ((void*)0), -1);
  VAR_15->xd_dev = VAR_17;
  FUNC_3(VAR_17, VAR_15);
 }

out:
 FUNC_9(VAR_13);
 if (VAR_16 != 0)
  FUNC_19(VAR_15);

 return (VAR_16);
}

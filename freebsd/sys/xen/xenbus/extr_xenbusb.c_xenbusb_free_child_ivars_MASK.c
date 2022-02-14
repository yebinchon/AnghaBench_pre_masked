
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct xenbus_device_ivars* node; } ;
struct xenbus_device_ivars {scalar_t__ xd_otherend_path_len; struct xenbus_device_ivars* xd_otherend_path; struct xenbus_device_ivars* xd_type; scalar_t__ xd_node_len; struct xenbus_device_ivars* xd_node; TYPE_1__ xd_local_watch; TYPE_1__ xd_otherend_watch; } ;


 int VAR_0 ;
 int FUNC_0 (struct xenbus_device_ivars*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct xenbus_device_ivars *VAR_1)
{
 if (VAR_1->xd_otherend_watch.node != ((void*)0)) {
  FUNC_1(&VAR_1->xd_otherend_watch);
  FUNC_0(VAR_1->xd_otherend_watch.node, VAR_0);
  VAR_1->xd_otherend_watch.node = ((void*)0);
 }

 if (VAR_1->xd_local_watch.node != ((void*)0)) {
  FUNC_1(&VAR_1->xd_local_watch);
  VAR_1->xd_local_watch.node = ((void*)0);
 }

 if (VAR_1->xd_node != ((void*)0)) {
  FUNC_0(VAR_1->xd_node, VAR_0);
  VAR_1->xd_node = ((void*)0);
 }
 VAR_1->xd_node_len = 0;

 if (VAR_1->xd_type != ((void*)0)) {
  FUNC_0(VAR_1->xd_type, VAR_0);
  VAR_1->xd_type = ((void*)0);
 }

 if (VAR_1->xd_otherend_path != ((void*)0)) {
  FUNC_0(VAR_1->xd_otherend_path, VAR_0);
  VAR_1->xd_otherend_path = ((void*)0);
 }
 VAR_1->xd_otherend_path_len = 0;

 FUNC_0(VAR_1, VAR_0);
}

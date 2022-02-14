
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {char* node; uintptr_t callback_data; int callback; } ;
struct TYPE_4__ {void* ich_arg; int ich_func; } ;
struct xenbusb_softc {char* xbs_node; int xbs_connecting_children; TYPE_1__ xbs_device_watch; int xbs_probe_children; int xbs_flags; TYPE_2__ xbs_attach_ch; void* xbs_dev; int xbs_id_components; int xbs_lock; } ;
typedef void* device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 struct xenbusb_softc* FUNC_2 (void*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct xenbusb_softc*) ;
 int VAR_3 ;
 int FUNC_5 (void*) ;
 int VAR_4 ;
 int FUNC_6 (struct xenbusb_softc*) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(device_t VAR_5, char *VAR_6, u_int VAR_7)
{
 struct xenbusb_softc *VAR_8;

 VAR_8 = FUNC_2(VAR_5);
 FUNC_3(&VAR_8->xbs_lock, "xenbusb softc lock", ((void*)0), VAR_0);
 VAR_8->xbs_node = VAR_6;
 VAR_8->xbs_id_components = VAR_7;
 VAR_8->xbs_dev = VAR_5;
 VAR_8->xbs_attach_ch.ich_func = VAR_3;
 VAR_8->xbs_attach_ch.ich_arg = VAR_5;
 FUNC_1(&VAR_8->xbs_attach_ch);
 VAR_8->xbs_flags |= VAR_1;
 VAR_8->xbs_connecting_children = 1;
 (void)FUNC_4(VAR_8);
 FUNC_5(VAR_5);

 VAR_8->xbs_device_watch.node = VAR_6;
 VAR_8->xbs_device_watch.callback = VAR_2;
 VAR_8->xbs_device_watch.callback_data = (uintptr_t)VAR_8;

 FUNC_0(&VAR_8->xbs_probe_children, 0, VAR_4, VAR_5);

 FUNC_7(&VAR_8->xbs_device_watch);

 FUNC_6(VAR_8);

 return (0);
}

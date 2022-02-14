
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * node; } ;
struct xenbus_device_ivars {TYPE_1__ xd_local_watch; TYPE_1__ xd_otherend_watch; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 struct xenbus_device_ivars* FUNC_1 (int ) ;
 int FUNC_2 (struct xenbus_device_ivars*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct xenbus_device_ivars *VAR_2;

 VAR_2 = FUNC_1(VAR_1);







 if (VAR_2->xd_otherend_watch.node != ((void*)0))
  FUNC_3(&VAR_2->xd_otherend_watch);
 if (VAR_2->xd_local_watch.node != ((void*)0))
  FUNC_3(&VAR_2->xd_local_watch);

 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2);
}

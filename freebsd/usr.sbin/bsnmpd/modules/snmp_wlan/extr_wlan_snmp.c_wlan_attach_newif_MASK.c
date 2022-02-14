
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlan_iface {int status; int index; } ;
struct TYPE_3__ {scalar_t__ ifi_type; } ;
struct TYPE_4__ {TYPE_1__ ifmd_data; } ;
struct mibif {int index; int name; TYPE_2__ mib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wlan_iface*) ;
 struct wlan_iface* FUNC_2 (int ) ;
 int FUNC_3 (struct wlan_iface*) ;

__attribute__((used)) static int
FUNC_4(struct mibif *VAR_3)
{
 struct wlan_iface *VAR_4;

 if (VAR_3->mib.ifmd_data.ifi_type != VAR_1 ||
     FUNC_0(VAR_3->name) != VAR_0)
  return (0);

 if ((VAR_4 = FUNC_2(VAR_3->name)) == ((void*)0))
  return (-1);

 (void)FUNC_1(VAR_4);
 VAR_4->index = VAR_3->index;
 VAR_4->status = VAR_2;
 (void)FUNC_3(VAR_4);

 return (0);
}

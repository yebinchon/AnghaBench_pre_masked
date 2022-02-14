
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ state; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wlan_iface*) ;
 int FUNC_1 (struct wlan_iface*,int) ;

__attribute__((used)) static int
FUNC_2(struct wlan_iface *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3)) == VAR_1) {




  VAR_3->status = VAR_0;
  if (VAR_3->state == VAR_2)
   (void)FUNC_1(VAR_3, 1);
 }

 return (VAR_4);
}

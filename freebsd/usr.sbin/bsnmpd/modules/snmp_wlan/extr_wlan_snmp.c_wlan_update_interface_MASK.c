
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct wlan_iface*,int) ;
 int FUNC_1 (struct wlan_iface*,int ) ;
 int FUNC_2 (struct wlan_iface*) ;
 int FUNC_3 (struct wlan_iface*) ;
 int FUNC_4 (struct wlan_iface*) ;
 int FUNC_5 (struct wlan_iface*) ;
 int FUNC_6 (struct wlan_iface*) ;
 int FUNC_7 (struct wlan_iface*) ;
 int FUNC_8 (struct wlan_iface*) ;
 int FUNC_9 (struct wlan_iface*) ;
 int FUNC_10 (struct wlan_iface*) ;
 int FUNC_11 (struct wlan_iface*) ;
 int FUNC_12 (struct wlan_iface*) ;
 int FUNC_13 (struct wlan_iface*,int) ;
 int FUNC_14 (struct wlan_iface*,int) ;
 int FUNC_15 (struct wlan_iface*) ;

__attribute__((used)) static int
FUNC_16(struct wlan_iface *VAR_7)
{
 int VAR_8;

 (void)FUNC_1(VAR_7, 0);
 (void)FUNC_3(VAR_7);
 for (VAR_8 = VAR_2;
     VAR_8 <= VAR_3; VAR_8++)
  (void)FUNC_0(VAR_7, VAR_8);
 (void)FUNC_9(VAR_7);




 (void)FUNC_2(VAR_7);
 (void)FUNC_7(VAR_7);
 (void)FUNC_10(VAR_7);
 (void)FUNC_8(VAR_7);
 (void)FUNC_11(VAR_7);
 (void)FUNC_12(VAR_7);
 (void)FUNC_5(VAR_7);
 (void)FUNC_4(VAR_7);
 (void)FUNC_6(VAR_7);

 if (VAR_7->mode == VAR_6) {
  for (VAR_8 = VAR_5; VAR_8 <= VAR_4; VAR_8++)
   (void)FUNC_14(VAR_7, VAR_8);
  (void)FUNC_15(VAR_7);
  for (VAR_8 = VAR_1; VAR_8 <= VAR_0; VAR_8++)
   (void)FUNC_13(VAR_7, VAR_8);
 }

 return (0);
}

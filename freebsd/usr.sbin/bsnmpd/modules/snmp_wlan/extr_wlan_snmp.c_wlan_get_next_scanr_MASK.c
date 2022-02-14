
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint ;
struct wlan_scan_result {int dummy; } ;
struct wlan_iface {int scanlist; } ;
struct asn_oid {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wlan_scan_result* FUNC_0 (int *) ;
 struct wlan_scan_result* FUNC_1 (struct wlan_scan_result*,int ) ;
 struct wlan_iface* FUNC_2 (char*) ;
 struct wlan_iface* FUNC_3 () ;
 struct wlan_iface* FUNC_4 (struct wlan_iface*) ;
 struct wlan_scan_result* FUNC_5 (struct wlan_iface*,int *,int *) ;
 scalar_t__ FUNC_6 (struct asn_oid const*,scalar_t__,char*,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static struct wlan_scan_result *
FUNC_7(const struct asn_oid *VAR_4, uint VAR_5,
    struct wlan_iface **VAR_6)
{
 char VAR_7[VAR_2];
 uint8_t VAR_8[VAR_1 + 1];
 uint8_t VAR_9[VAR_0];
 struct wlan_scan_result *VAR_10;

 if (VAR_4->len - VAR_5 == 0) {
  for (*VAR_6 = FUNC_3(); *VAR_6 != ((void*)0);
      *VAR_6 = FUNC_4(*VAR_6)) {
   VAR_10 = FUNC_0(&(*VAR_6)->scanlist);
   if (VAR_10 != ((void*)0))
    return (VAR_10);
  }
  return (((void*)0));
 }

 if (FUNC_6(VAR_4, VAR_5, VAR_7, VAR_8, VAR_9) < 0 ||
     (*VAR_6 = FUNC_2(VAR_7)) == ((void*)0) ||
     (VAR_10 = FUNC_5(*VAR_6, VAR_8, VAR_9)) == ((void*)0))
  return (((void*)0));

 if ((VAR_10 = FUNC_1(VAR_10, VAR_3)) != ((void*)0))
  return (VAR_10);

 while ((*VAR_6 = FUNC_4(*VAR_6)) != ((void*)0))
  if ((VAR_10 = FUNC_0(&(*VAR_6)->scanlist)) != ((void*)0))
   break;

 return (VAR_10);
}

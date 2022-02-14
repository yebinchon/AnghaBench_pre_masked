
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint ;
struct wlan_peer {int dummy; } ;
struct wlan_iface {scalar_t__ mode; } ;
struct asn_oid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wlan_iface* FUNC_0 (char*) ;
 struct wlan_peer* FUNC_1 (struct wlan_iface*,int *) ;
 scalar_t__ FUNC_2 (struct asn_oid const*,int ,char*,int *) ;

__attribute__((used)) static struct wlan_peer *
FUNC_3(const struct asn_oid *VAR_3, uint VAR_4, struct wlan_iface **VAR_5)
{
 char VAR_6[VAR_1];
 uint8_t VAR_7[VAR_0];

 if (FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7) < 0)
  return (((void*)0));

 if ((*VAR_5 = FUNC_0(VAR_6)) == ((void*)0) ||
     (*VAR_5)->mode != VAR_2)
  return (((void*)0));

 return (FUNC_1(*VAR_5, VAR_7));
}

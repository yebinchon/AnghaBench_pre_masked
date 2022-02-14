
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint ;
struct wlan_peer {int dummy; } ;
struct wlan_iface {int dummy; } ;
struct asn_oid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wlan_iface* FUNC_0 (char*) ;
 struct wlan_peer* FUNC_1 (struct wlan_iface*,int *) ;
 scalar_t__ FUNC_2 (struct asn_oid const*,int ,char*,int *) ;

__attribute__((used)) static struct wlan_peer *
FUNC_3(const struct asn_oid *VAR_2, uint VAR_3, struct wlan_iface **VAR_4)
{
 char VAR_5[VAR_1];
 uint8_t VAR_6[VAR_0];

 if (FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6) < 0)
  return (((void*)0));

 if ((*VAR_4 = FUNC_0(VAR_5)) == ((void*)0))
  return (((void*)0));

 return (FUNC_1(*VAR_4, VAR_6));
}

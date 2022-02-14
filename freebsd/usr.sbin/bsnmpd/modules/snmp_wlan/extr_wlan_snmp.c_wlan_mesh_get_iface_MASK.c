
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct wlan_iface {scalar_t__ mode; } ;
struct asn_oid {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct wlan_iface* FUNC_0 (struct asn_oid const*,int ) ;

__attribute__((used)) static struct wlan_iface *
FUNC_1(const struct asn_oid *VAR_1, uint VAR_2)
{
 struct wlan_iface *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return (((void*)0));

 if (VAR_3->mode != VAR_0)
  return (((void*)0));

 return (VAR_3);
}

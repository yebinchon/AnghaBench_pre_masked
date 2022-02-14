
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint ;
struct wlan_iface {int dummy; } ;
struct asn_oid {int dummy; } ;


 int VAR_0 ;
 struct wlan_iface* FUNC_0 (int *) ;
 int * FUNC_1 (struct asn_oid const*,int ,int *) ;

__attribute__((used)) static struct wlan_iface *
FUNC_2(const struct asn_oid *VAR_1, uint VAR_2)
{
 uint8_t VAR_3[VAR_0];

 if (FUNC_1(VAR_1, VAR_2, VAR_3) == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_3));
}

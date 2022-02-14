
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint ;
struct wlan_iface {int dummy; } ;
struct asn_oid {scalar_t__ len; scalar_t__* subs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 struct wlan_iface* FUNC_1 (char*) ;
 struct wlan_iface* FUNC_2 () ;
 struct wlan_iface* FUNC_3 (struct wlan_iface*) ;

__attribute__((used)) static struct wlan_iface *
FUNC_4(const struct asn_oid *VAR_1, uint VAR_2)
{
 uint32_t VAR_3;
 uint8_t VAR_4[VAR_0];
 struct wlan_iface *VAR_5;

 if (VAR_1->len - VAR_2 == 0)
  return (FUNC_2());

 if (VAR_1->len - VAR_2 != VAR_1->subs[VAR_2] + 1 || VAR_1->subs[VAR_2] >= VAR_0)
  return (((void*)0));

 FUNC_0(VAR_4, 0, VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->subs[VAR_2]; VAR_3++)
  VAR_4[VAR_3] = VAR_1->subs[VAR_2 + VAR_3 + 1];
 VAR_4[VAR_3] = '\0';

 if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0))
  return (((void*)0));

 return (FUNC_3(VAR_5));
}

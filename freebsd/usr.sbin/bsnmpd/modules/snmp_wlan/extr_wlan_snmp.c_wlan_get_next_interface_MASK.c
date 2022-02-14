
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint ;
struct wlan_iface {scalar_t__ status; } ;
struct asn_oid {scalar_t__ len; scalar_t__* subs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 struct wlan_iface* FUNC_1 (char*) ;
 struct wlan_iface* FUNC_2 () ;
 struct wlan_iface* FUNC_3 (struct wlan_iface*) ;

__attribute__((used)) static struct wlan_iface *
FUNC_4(const struct asn_oid *VAR_2, uint VAR_3)
{
 uint32_t VAR_4;
 uint8_t VAR_5[VAR_0];
 struct wlan_iface *VAR_6;

 if (VAR_2->len - VAR_3 == 0) {
  for (VAR_6 = FUNC_2(); VAR_6 != ((void*)0);
      VAR_6 = FUNC_3(VAR_6))
   if (VAR_6->status == VAR_1)
    break;
  return (VAR_6);
 }

 if (VAR_2->len - VAR_3 != VAR_2->subs[VAR_3] + 1 || VAR_2->subs[VAR_3] >= VAR_0)
  return (((void*)0));

 FUNC_0(VAR_5, 0, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_2->subs[VAR_3]; VAR_4++)
  VAR_5[VAR_4] = VAR_2->subs[VAR_3 + VAR_4 + 1];
 VAR_5[VAR_4] = '\0';
 if ((VAR_6 = FUNC_1(VAR_5)) == ((void*)0))
  return (((void*)0));

 while ((VAR_6 = FUNC_3(VAR_6)) != ((void*)0))
  if (VAR_6->status == VAR_1)
   break;

 return (VAR_6);
}

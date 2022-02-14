
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct wlan_peer {int dummy; } ;
struct wlan_iface {scalar_t__ mode; int peerlist; } ;
struct asn_oid {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wlan_peer* FUNC_0 (int *) ;
 struct wlan_peer* FUNC_1 (struct wlan_peer*,int ) ;
 scalar_t__ VAR_2 ;
 struct wlan_iface* FUNC_2 (char*) ;
 struct wlan_peer* FUNC_3 (struct wlan_iface*,char*) ;
 scalar_t__ FUNC_4 (struct asn_oid const*,scalar_t__,char*,char*) ;
 struct wlan_iface* FUNC_5 () ;
 struct wlan_iface* FUNC_6 (struct wlan_iface*) ;
 int VAR_3 ;

__attribute__((used)) static struct wlan_peer *
FUNC_7(const struct asn_oid *VAR_4, uint VAR_5, struct wlan_iface **VAR_6)
{
 char VAR_7[VAR_1];
 char VAR_8[VAR_0];
 struct wlan_peer *VAR_9;

 if (VAR_4->len - VAR_5 == 0) {
  for (*VAR_6 = FUNC_5(); *VAR_6 != ((void*)0);
      *VAR_6 = FUNC_6(*VAR_6)) {
   VAR_9 = FUNC_0(&(*VAR_6)->peerlist);
   if (VAR_9 != ((void*)0))
    return (VAR_9);
  }
  return (((void*)0));
 }

 if (FUNC_4(VAR_4, VAR_5, VAR_7, VAR_8) < 0 ||
     (*VAR_6 = FUNC_2(VAR_7)) == ((void*)0) ||
     (*VAR_6)->mode != VAR_2 ||
     (VAR_9 = FUNC_3(*VAR_6, VAR_8)) == ((void*)0))
  return (((void*)0));

 if ((VAR_9 = FUNC_1(VAR_9, VAR_3)) != ((void*)0))
  return (VAR_9);

 while ((*VAR_6 = FUNC_6(*VAR_6)) != ((void*)0))
  if ((VAR_9 = FUNC_0(&(*VAR_6)->peerlist)) != ((void*)0))
   break;

 return (VAR_9);
}

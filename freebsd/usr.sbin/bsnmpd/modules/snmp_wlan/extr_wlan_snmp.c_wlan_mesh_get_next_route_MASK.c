
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct wlan_mesh_route {int dummy; } ;
struct wlan_iface {int mesh_routelist; } ;
struct asn_oid {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wlan_mesh_route* FUNC_0 (int *) ;
 struct wlan_mesh_route* FUNC_1 (struct wlan_mesh_route*,int ) ;
 struct wlan_iface* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct asn_oid const*,scalar_t__,char*,char*) ;
 struct wlan_mesh_route* FUNC_4 (struct wlan_iface*,char*) ;
 struct wlan_iface* FUNC_5 () ;
 struct wlan_iface* FUNC_6 (struct wlan_iface*) ;
 int VAR_2 ;

__attribute__((used)) static struct wlan_mesh_route *
FUNC_7(const struct asn_oid *VAR_3, uint VAR_4,
    struct wlan_iface **VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_0];
 struct wlan_mesh_route *VAR_8;

 if (VAR_3->len - VAR_4 == 0) {
  for (*VAR_5 = FUNC_5(); *VAR_5 != ((void*)0);
      *VAR_5 = FUNC_6(*VAR_5)) {
   VAR_8 = FUNC_0(&(*VAR_5)->mesh_routelist);
   if (VAR_8 != ((void*)0))
    return (VAR_8);
  }
  return (((void*)0));
 }

 if (FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7) < 0 ||
     (*VAR_5 = FUNC_2(VAR_6)) == ((void*)0) ||
     (VAR_8 = FUNC_4(*VAR_5, VAR_7)) == ((void*)0))
  return (((void*)0));

 if ((VAR_8 = FUNC_1(VAR_8, VAR_2)) != ((void*)0))
  return (VAR_8);

 while ((*VAR_5 = FUNC_6(*VAR_5)) != ((void*)0))
  if ((VAR_8 = FUNC_0(&(*VAR_5)->mesh_routelist)) != ((void*)0))
   break;

 return (VAR_8);
}

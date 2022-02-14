
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wlan_peer {int pmac; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct wlan_peer*,int ,int) ;

struct wlan_peer *
FUNC_3(const uint8_t *VAR_1)
{
 struct wlan_peer *VAR_2;

 if ((VAR_2 = (struct wlan_peer *)FUNC_0(sizeof(*VAR_2))) == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_2, 0, sizeof(struct wlan_peer));
 FUNC_1(VAR_2->pmac, VAR_1, VAR_0);

 return (VAR_2);
}

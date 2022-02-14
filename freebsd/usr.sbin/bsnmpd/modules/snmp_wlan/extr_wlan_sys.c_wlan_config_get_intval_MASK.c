
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wname; } ;


 scalar_t__ FUNC_0 (struct wlan_iface*,int) ;
 int FUNC_1 (struct wlan_iface*,int,int) ;
 scalar_t__ FUNC_2 (int ,int,int*,int *,size_t*,int ) ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 size_t VAR_3 = 0;

 if (FUNC_0(VAR_0, VAR_1) < 0)
  return (0);
 if (FUNC_2(VAR_0->wname, VAR_1, &VAR_2, ((void*)0), &VAR_3, 0) < 0)
  return (-1);
 FUNC_1(VAR_0, VAR_1, VAR_2);

 return (0);
}

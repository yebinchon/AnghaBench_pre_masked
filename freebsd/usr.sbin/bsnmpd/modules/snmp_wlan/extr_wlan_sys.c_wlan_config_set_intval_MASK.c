
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct wlan_iface*,int) ;
 int FUNC_1 (struct wlan_iface*,int,int) ;
 scalar_t__ FUNC_2 (int,int,int*) ;
 scalar_t__ FUNC_3 (int ,int,int*,int *,size_t*,int) ;

__attribute__((used)) static int
FUNC_4(struct wlan_iface *VAR_1, int VAR_2, int VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5;

 if (FUNC_0(VAR_1, VAR_2) < 0)
  return (-1);
 if (FUNC_2(VAR_2, VAR_3, &VAR_5) != VAR_0)
  return (-1);
 if (FUNC_3(VAR_1->wname, VAR_2, &VAR_5, ((void*)0), &VAR_4, 1) < 0)
  return (-1);
 FUNC_1(VAR_1, VAR_2, VAR_5);

 return (0);
}

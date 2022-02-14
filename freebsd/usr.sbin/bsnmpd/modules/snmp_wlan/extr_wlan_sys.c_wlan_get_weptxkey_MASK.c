
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int weptxkey; int wname; int wepsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int ) ;

int
FUNC_1(struct wlan_iface *VAR_2)
{
 int VAR_3;
 size_t VAR_4 = 0;

 if (!VAR_2->wepsupported)
  return (0);

 if (FUNC_0(VAR_2->wname, VAR_0, &VAR_3, ((void*)0),
     &VAR_4, 0) < 0)
  return (-1);

 if (VAR_3 == VAR_1)
  VAR_2->weptxkey = 0;
 else
  VAR_2->weptxkey = VAR_3 + 1;

 return (0);
}

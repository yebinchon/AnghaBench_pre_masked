
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int weptxkey; int wname; int wepsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int) ;

int
FUNC_1(struct wlan_iface *VAR_3)
{
 int VAR_4;
 size_t VAR_5 = 0;

 if (!VAR_3->wepsupported)
  return (0);

 if (VAR_3->weptxkey >= VAR_2)
  return (-1);

 if (VAR_3->weptxkey == 0)
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_3->weptxkey - 1;
 if (FUNC_0(VAR_3->wname, VAR_0, &VAR_4, ((void*)0),
     &VAR_5, 1) < 0)
  return (-1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int) ;

int
FUNC_1(struct wlan_iface *VAR_2)
{
 int VAR_3 = VAR_1;
 size_t VAR_4 = 0;

 if (FUNC_0(VAR_2->wname, VAR_0, &VAR_3, ((void*)0),
     &VAR_4, 1) < 0)
  return (-1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int mode; int wname; } ;
struct ifmediareq {int ifm_current; int ifm_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifmediareq*) ;
 int FUNC_1 (struct ifmediareq*,int ,int) ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(struct wlan_iface *VAR_17)
{
 struct ifmediareq VAR_18;

 FUNC_1(&VAR_18, 0, sizeof(struct ifmediareq));
 FUNC_2(VAR_18.ifm_name, VAR_17->wname, sizeof(VAR_18.ifm_name));

 if (FUNC_0(VAR_16, VAR_7, &VAR_18) < 0) {
  if (VAR_15 == VAR_0)
   return (-1);
  VAR_17->mode = VAR_13;
  return (0);
 }

 if (VAR_18.ifm_current & VAR_2) {
  if (VAR_18.ifm_current & VAR_1)
   VAR_17->mode = VAR_8;
  else
   VAR_17->mode = VAR_10;
 } else if (VAR_18.ifm_current & VAR_3)
  VAR_17->mode = VAR_9;
 else if (VAR_18.ifm_current & VAR_5)
  VAR_17->mode = VAR_12;
 else if (VAR_18.ifm_current & VAR_4)
  VAR_17->mode = VAR_11;
 else if (VAR_18.ifm_current & VAR_6)
  VAR_17->mode = VAR_14;

 return (0);
}

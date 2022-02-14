
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifr_name; } ;
struct wlanstatfoo_p {int opmode; TYPE_1__ ifr; int s; } ;
struct wlanstatfoo {int dummy; } ;
struct ifmediareq {int ifm_current; int ifm_name; } ;
typedef int ifmr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct ifmediareq*) ;
 int FUNC_2 (struct ifmediareq*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct wlanstatfoo *VAR_10)
{
 struct wlanstatfoo_p *VAR_11 = (struct wlanstatfoo_p *) VAR_10;

 if (VAR_11->opmode == -1) {
  struct ifmediareq VAR_12;

  FUNC_2(&VAR_12, 0, sizeof(VAR_12));
  FUNC_3(VAR_12.ifm_name, VAR_11->ifr.ifr_name, sizeof(VAR_12.ifm_name));
  if (FUNC_1(VAR_11->s, VAR_9, &VAR_12) < 0)
   FUNC_0(1, "%s (SIOCGIFMEDIA)", VAR_11->ifr.ifr_name);
  if (VAR_12.ifm_current & VAR_6) {
   if (VAR_12.ifm_current & VAR_5)
    VAR_11->opmode = VAR_0;
   else
    VAR_11->opmode = VAR_2;
  } else if (VAR_12.ifm_current & VAR_7)
   VAR_11->opmode = VAR_1;
  else if (VAR_12.ifm_current & VAR_8)
   VAR_11->opmode = VAR_3;
  else
   VAR_11->opmode = VAR_4;
 }
 return VAR_11->opmode;
}

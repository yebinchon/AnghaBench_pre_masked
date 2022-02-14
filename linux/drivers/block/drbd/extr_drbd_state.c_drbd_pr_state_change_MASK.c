
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {int aftr_isp; int peer_isp; int user_isp; } ;
struct drbd_device {int dummy; } ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,char*,char*) ;
 int FUNC_1 (char*,union drbd_state,union drbd_state,int) ;
 int FUNC_2 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct drbd_device *VAR_1, union drbd_state VAR_2, union drbd_state VAR_3,
     enum chg_state_flags VAR_4)
{
 char VAR_5[300];
 char *VAR_6 = VAR_5;

 VAR_6 += FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4 ^ VAR_0);

 if (VAR_3.aftr_isp != VAR_2.aftr_isp)
  VAR_6 += FUNC_2(VAR_6, "aftr_isp( %d -> %d ) ",
          VAR_2.aftr_isp,
          VAR_3.aftr_isp);
 if (VAR_3.peer_isp != VAR_2.peer_isp)
  VAR_6 += FUNC_2(VAR_6, "peer_isp( %d -> %d ) ",
          VAR_2.peer_isp,
          VAR_3.peer_isp);
 if (VAR_3.user_isp != VAR_2.user_isp)
  VAR_6 += FUNC_2(VAR_6, "user_isp( %d -> %d ) ",
          VAR_2.user_isp,
          VAR_3.user_isp);

 if (VAR_6 != VAR_5)
  FUNC_0(VAR_1, "%s\n", VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wd ;
typedef int time_t ;
struct TYPE_3__ {void* out_time; } ;
struct whoent {TYPE_1__ we_utmp; void* we_idle; } ;
struct whod {scalar_t__ wd_vers; scalar_t__ wd_type; char* wd_hostname; int wd_recvtime; struct whoent* wd_we; void* wd_boottime; void** wd_loadav; void* wd_sendtime; } ;
struct stat {int st_size; } ;
struct sockaddr_in {scalar_t__ sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int path ;
typedef int from ;
typedef int cap_rights_t ;
struct TYPE_4__ {scalar_t__ s_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,...) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;
 int VAR_18 ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int,char*,int,int) ;
 int FUNC_13 (int ,struct whod*,int,int ,struct sockaddr*,int*) ;
 int VAR_19 ;
 int FUNC_14 (char*,int,char*,char*) ;
 TYPE_2__* VAR_20 ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (int,char*,int) ;

void
FUNC_19(void)
{
 struct sockaddr_in VAR_21;
 struct stat VAR_22;
 cap_rights_t VAR_23;
 char VAR_24[64];
 int VAR_25;
 struct whod VAR_26;
 socklen_t VAR_27;
 int VAR_28, VAR_29;
 time_t VAR_30;

 VAR_27 = sizeof(VAR_21);
 VAR_25 = FUNC_11(".", VAR_11 | VAR_10);
 if (VAR_25 < 0) {
  FUNC_15(VAR_8, "%s: %m", VAR_16);
  FUNC_5(1);
 }
 FUNC_1(&VAR_23, VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5);
 if (FUNC_3(VAR_25, &VAR_23) < 0) {
  FUNC_15(VAR_8, "cap_rights_limit: %m");
  FUNC_5(1);
 }
 if (FUNC_2() < 0) {
  FUNC_15(VAR_7, "cap_enter: %m");
  FUNC_5(1);
 }
 for (;;) {
  VAR_28 = FUNC_13(VAR_19, &VAR_26, sizeof(VAR_26), 0, (struct sockaddr *)&VAR_21,
      &VAR_27);
  if (VAR_28 <= 0) {
   if (VAR_28 < 0 && VAR_17 != VAR_6)
    FUNC_15(VAR_8, "recv: %m");
   continue;
  }
  if (VAR_21.sin_port != VAR_20->s_port && !VAR_18) {
   FUNC_15(VAR_8, "%d: bad source port from %s",
       FUNC_10(VAR_21.sin_port), FUNC_8(VAR_21.sin_addr));
   continue;
  }
  if (VAR_28 < VAR_13) {
   FUNC_15(VAR_8, "short packet from %s",
       FUNC_8(VAR_21.sin_addr));
   continue;
  }
  if (VAR_26.wd_vers != VAR_15)
   continue;
  if (VAR_26.wd_type != VAR_14)
   continue;
  if (!FUNC_17(VAR_26.wd_hostname, sizeof(VAR_26.wd_hostname))) {
   FUNC_15(VAR_8, "malformed host name from %s",
       FUNC_8(VAR_21.sin_addr));
   continue;
  }
  (void) FUNC_14(VAR_24, sizeof(VAR_24), "whod.%s", VAR_26.wd_hostname);




  VAR_29 = FUNC_12(VAR_25, VAR_24, VAR_12 | VAR_9, 0644);
  if (VAR_29 < 0) {
   FUNC_15(VAR_8, "%s: %m", VAR_24);
   continue;
  }
  FUNC_1(&VAR_23, VAR_1, VAR_2, VAR_5);
  if (FUNC_3(VAR_29, &VAR_23) < 0) {
   FUNC_15(VAR_8, "cap_rights_limit: %m");
   FUNC_5(1);
  }
  (void) FUNC_16(&VAR_30);
  VAR_26.wd_recvtime = FUNC_0(VAR_30);
  (void) FUNC_18(VAR_29, (char *)&VAR_26, VAR_28);
  if (FUNC_6(VAR_29, &VAR_22) < 0 || VAR_22.st_size > VAR_28)
   FUNC_7(VAR_29, VAR_28);
  (void) FUNC_4(VAR_29);
 }
 (void) FUNC_4(VAR_25);
}

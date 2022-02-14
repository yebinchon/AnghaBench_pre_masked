
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa_data; int sa_len; int sa_family; } ;
struct ifreq {char* ifr_name; int ifr_flags; TYPE_1__ ifr_addr; } ;
struct ether_addr {int dummy; } ;
typedef int pidfile ;
typedef int ifr ;
struct TYPE_6__ {int * pfh; int state; int laddr; int raddr; scalar_t__ mru; int recv; int send; } ;
typedef TYPE_2__ channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ether_addr*) ;
 int FUNC_5 (int ) ;
 int VAR_16 ;
 int FUNC_6 (int,int ,struct ifreq*) ;
 int VAR_17 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct ifreq*,int ,int) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (char*,int,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,char*,char*) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;

void
FUNC_17(void)
{
 channel_t *VAR_20;
 struct ifreq VAR_21;
 int VAR_22, VAR_23;
 char VAR_24[VAR_9];

 VAR_22 = FUNC_11(VAR_16, VAR_8);
 if (VAR_22 == -1) {
  FUNC_7("Could not open \"%s\": %m", VAR_16);
  FUNC_5(VAR_6);
 }

 FUNC_10(&VAR_21, 0, sizeof(VAR_21));
 if (FUNC_6(VAR_22, VAR_14, &VAR_21) == -1) {
  FUNC_7("Could not get interface name: %m");
  FUNC_5(VAR_6);
 }

 VAR_23 = FUNC_16(VAR_0, VAR_13, 0);
 if (VAR_23 == -1) {
  FUNC_7("Could not open PF_LINK socket: %m");
  FUNC_5(VAR_6);
 }

 VAR_21.ifr_addr.sa_family = VAR_1;
 VAR_21.ifr_addr.sa_len = VAR_3;
 FUNC_0(VAR_21.ifr_addr.sa_data, &VAR_17);

 if (FUNC_6(VAR_23, VAR_12, &VAR_21) == -1) {
  FUNC_7("Could not set %s physical address: %m", VAR_21.ifr_name);
  FUNC_5(VAR_6);
 }

 if (FUNC_6(VAR_23, VAR_10, &VAR_21) == -1) {
  FUNC_7("Could not get interface flags: %m");
  FUNC_5(VAR_6);
 }

 if ((VAR_21.ifr_flags & VAR_7) == 0) {
  VAR_21.ifr_flags |= VAR_7;

  if (FUNC_6(VAR_23, VAR_11, &VAR_21) == -1) {
   FUNC_7("Could not set IFF_UP: %m");
   FUNC_5(VAR_6);
  }
 }

 FUNC_3(VAR_23);

 FUNC_8("Using interface %s with addr %s", VAR_21.ifr_name,
  FUNC_4((struct ether_addr *)&VAR_21.ifr_addr.sa_data));

 VAR_20 = FUNC_1();
 if (VAR_20 == ((void*)0))
  FUNC_5(VAR_6);

 VAR_20->send = VAR_19;
 VAR_20->recv = VAR_18;
 VAR_20->mru = VAR_4 + VAR_5;
 FUNC_9(VAR_20->raddr, VAR_21.ifr_addr.sa_data, VAR_3);
 FUNC_9(VAR_20->laddr, VAR_21.ifr_addr.sa_data, VAR_3);
 VAR_20->state = VAR_2;
 if (!FUNC_2(VAR_20, VAR_22))
  FUNC_5(VAR_6);

 FUNC_15(VAR_24, sizeof(VAR_24), "%s/%s.pid",
  VAR_15, VAR_21.ifr_name);
 VAR_20->pfh = FUNC_12(VAR_24, 0600, ((void*)0));
 if (VAR_20->pfh == ((void*)0))
  FUNC_7("can't create pidfile");
 else if (FUNC_14(VAR_20->pfh) < 0) {
  FUNC_7("can't write pidfile");
  FUNC_13(VAR_20->pfh);
  VAR_20->pfh = ((void*)0);
 }
}

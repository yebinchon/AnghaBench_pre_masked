
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tuninfo {int flags; int baudrate; int mtu; int type; } ;
struct ifreq {int ifr_mtu; int ifr_name; } ;
struct TYPE_4__ {int fd; } ;
struct bundle {int unit; TYPE_2__ dev; int bandwidth; TYPE_1__* iface; } ;
struct TYPE_3__ {int mtu; } ;


 scalar_t__ FUNC_0 (int ,int ,struct tuninfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct tuninfo*,char,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct bundle *VAR_10)
{
  struct tuninfo VAR_11;

  FUNC_4(&VAR_11, '\0', sizeof VAR_11);
  VAR_11.type = VAR_3;
  VAR_11.mtu = VAR_10->iface->mtu;

  VAR_11.baudrate = VAR_10->bandwidth;



  if (FUNC_0(VAR_10->dev.fd, VAR_8, &VAR_11) < 0)
    FUNC_3(VAR_4, "tun_configure: ioctl(TUNSIFINFO): %s\n",
       FUNC_7(VAR_9));

}

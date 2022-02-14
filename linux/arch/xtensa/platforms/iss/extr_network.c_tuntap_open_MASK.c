
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* dev_name; int fd; } ;
struct TYPE_7__ {TYPE_2__ tuntap; } ;
struct TYPE_8__ {TYPE_3__ info; } ;
struct iss_net_private {TYPE_4__ tp; TYPE_1__* dev; } ;
struct ifreq {int ifr_flags; int ifr_name; } ;
typedef int ifr ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifreq*,int ,int) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,struct ifreq*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct iss_net_private *VAR_5)
{
 struct ifreq VAR_6;
 char *VAR_7 = VAR_5->tp.info.tuntap.dev_name;
 int VAR_8 = -VAR_0;
 int VAR_9;

 VAR_9 = FUNC_4("/dev/net/tun", 02, 0);
 if (VAR_9 < 0) {
  FUNC_1("%s: failed to open /dev/net/tun, returned %d (errno = %d)\n",
         VAR_5->dev->name, VAR_9, VAR_4);
  return VAR_9;
 }

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ifr_flags = VAR_2 | VAR_1;
 FUNC_5(VAR_6.ifr_name, VAR_7, sizeof(VAR_6.ifr_name));

 VAR_8 = FUNC_3(VAR_9, VAR_3, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_1("%s: failed to set interface %s, returned %d (errno = %d)\n",
         VAR_5->dev->name, VAR_7, VAR_8, VAR_4);
  FUNC_2(VAR_9);
  return VAR_8;
 }

 VAR_5->tp.info.tuntap.fd = VAR_9;
 return VAR_8;
}

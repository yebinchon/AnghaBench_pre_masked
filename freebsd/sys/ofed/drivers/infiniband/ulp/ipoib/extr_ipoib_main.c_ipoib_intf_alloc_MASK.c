
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_dl {int sdl_alen; int sdl_type; } ;
struct ipoib_dev_priv {int unit; struct ifnet* dev; int broadcastaddr; } ;
struct TYPE_3__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; struct ipoib_dev_priv* if_softc; int if_addrlen; TYPE_2__* if_addr; TYPE_1__ if_snd; int if_broadcastaddr; int if_baudrate; int if_resolvemulti; int if_input; int if_output; int if_start; int if_ioctl; int if_init; int if_hdrlen; } ;
struct TYPE_4__ {scalar_t__ ifa_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ifnet*,int ,int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,int ) ;
 struct ifnet* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*,char const*,int) ;
 int FUNC_8 (struct ifnet*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ipoib_dev_priv* FUNC_9 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

struct ipoib_dev_priv *
FUNC_10(const char *VAR_17)
{
 struct ipoib_dev_priv *VAR_18;
 struct sockaddr_dl *VAR_19;
 struct ifnet *VAR_20;

 VAR_18 = FUNC_9();
 VAR_20 = VAR_18->dev = FUNC_4(VAR_4);
 if (!VAR_20) {
  FUNC_3(VAR_18, VAR_8);
  return ((void*)0);
 }
 VAR_20->if_softc = VAR_18;
 VAR_18->unit = FUNC_1(VAR_16);
 if (VAR_18->unit == -1) {
  FUNC_6(VAR_20);
  FUNC_3(VAR_18, VAR_8);
  return ((void*)0);
 }
 FUNC_7(VAR_20, VAR_17, VAR_18->unit);
 VAR_20->if_flags = VAR_2 | VAR_3;
 VAR_20->if_addrlen = VAR_5;
 VAR_20->if_hdrlen = VAR_6;
 FUNC_5(VAR_20);
 VAR_20->if_init = VAR_9;
 VAR_20->if_ioctl = VAR_11;
 VAR_20->if_start = VAR_15;
 VAR_20->if_output = VAR_12;
 VAR_20->if_input = VAR_10;
 VAR_20->if_resolvemulti = VAR_13;
 VAR_20->if_baudrate = FUNC_0(10);
 VAR_20->if_broadcastaddr = VAR_18->broadcastaddr;
 VAR_20->if_snd.ifq_maxlen = VAR_14 * 2;
 VAR_19 = (struct sockaddr_dl *)VAR_20->if_addr->ifa_addr;
 VAR_19->sdl_type = VAR_4;
 VAR_19->sdl_alen = VAR_20->if_addrlen;
 VAR_18->dev = VAR_20;
 FUNC_8(VAR_20, VAR_7);
 FUNC_2(VAR_20, VAR_0, VAR_1);

 return VAR_20->if_softc;
}

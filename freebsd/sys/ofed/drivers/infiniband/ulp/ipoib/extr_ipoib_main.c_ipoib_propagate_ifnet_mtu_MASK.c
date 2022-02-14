
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {struct ifnet* dev; } ;
struct ifreq {int ifr_mtu; int ifr_name; } ;
struct ifnet {int if_mtu; int if_vnet; } ;
typedef int caddr_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int ,struct ifnet*,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct ipoib_dev_priv *VAR_3, int VAR_4,
    bool VAR_5)
{
 struct ifnet *VAR_6;
 struct ifreq VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->dev;
 if (VAR_6->if_mtu == VAR_4)
  return (0);
 if (VAR_5) {
  FUNC_4(VAR_7.ifr_name, FUNC_2(VAR_6), VAR_0);
  VAR_7.ifr_mtu = VAR_4;
  FUNC_1(VAR_6->if_vnet);
  VAR_8 = FUNC_3(VAR_1, VAR_6, (caddr_t)&VAR_7, VAR_2);
  FUNC_0();
 } else {
  VAR_6->if_mtu = VAR_4;
  VAR_8 = 0;
 }
 return (VAR_8);
}

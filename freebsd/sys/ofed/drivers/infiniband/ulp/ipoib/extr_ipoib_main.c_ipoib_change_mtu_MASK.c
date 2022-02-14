
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int mcast_mtu; int admin_mtu; int flush_light; int max_ib_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ipoib_dev_priv*) ;
 int FUNC_3 (struct ipoib_dev_priv*) ;
 int FUNC_4 (struct ipoib_dev_priv*,int,int) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int) ;
 int VAR_1 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int *) ;

int
FUNC_8(struct ipoib_dev_priv *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;


 if (FUNC_2(VAR_2)) {
  if (VAR_3 > FUNC_0(FUNC_3(VAR_2)))
   return -VAR_0;

  if (VAR_3 > VAR_2->mcast_mtu)
   FUNC_5(VAR_2, "mtu > %d will cause multicast packet drops.\n",
       VAR_2->mcast_mtu);

  return (FUNC_4(VAR_2, VAR_3, VAR_4));
 }

 if (VAR_3 > FUNC_1(VAR_2->max_ib_mtu))
  return -VAR_0;

 VAR_6 = VAR_2->admin_mtu;
 VAR_2->admin_mtu = VAR_3;
 VAR_5 = FUNC_4(VAR_2, FUNC_6(VAR_2->mcast_mtu,
     VAR_2->admin_mtu), VAR_4);
 if (VAR_5 == 0) {

  if (VAR_6 != VAR_3)
   FUNC_7(VAR_1, &VAR_2->flush_light);
 } else
  VAR_2->admin_mtu = VAR_6;
 return (VAR_5);
}

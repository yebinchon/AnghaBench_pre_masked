
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {TYPE_1__* rn_ops; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,int) ;} ;


 int VAR_0 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ifreq *VAR_2,
         int VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->rn_ops->ndo_do_ioctl)
  return -VAR_0;

 return VAR_4->rn_ops->ndo_do_ioctl(VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {scalar_t__ reg_state; int (* priv_destructor ) (struct net_device*) ;int dev; } ;
struct ipoib_dev_priv {int pkey; int child_type; struct net_device* dev; struct net_device* parent; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_8 (struct ipoib_dev_priv*,struct ipoib_dev_priv*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

int FUNC_12(struct ipoib_dev_priv *VAR_6, struct ipoib_dev_priv *VAR_7,
       u16 VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = VAR_7->dev;
 int VAR_11;

 FUNC_0();





 VAR_10->priv_destructor = FUNC_6;





 FUNC_1(VAR_6->dev->reg_state != VAR_4);

 if (VAR_8 == 0 || VAR_8 == 0x8000) {
  VAR_11 = -VAR_0;
  goto out_early;
 }

 VAR_7->parent = VAR_6->dev;
 VAR_7->pkey = VAR_8;
 VAR_7->child_type = VAR_9;

 if (!FUNC_8(VAR_6, VAR_7)) {
  VAR_11 = -VAR_2;
  goto out_early;
 }

 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11) {
  FUNC_7(VAR_7, "failed to initialize; error %i", VAR_11);





  goto out_early;
 }


 if (VAR_9 == VAR_3) {
  if (FUNC_5(VAR_10))
   goto sysfs_failed;
  if (FUNC_3(VAR_10))
   goto sysfs_failed;
  if (FUNC_4(VAR_10))
   goto sysfs_failed;

  if (FUNC_2(&VAR_10->dev, &VAR_5))
   goto sysfs_failed;
 }

 return 0;

sysfs_failed:
 FUNC_11(VAR_7->dev);
 return -VAR_1;

out_early:
 if (VAR_10->priv_destructor)
  VAR_10->priv_destructor(VAR_10);
 return VAR_11;
}

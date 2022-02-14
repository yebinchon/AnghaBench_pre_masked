
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master {int scan_lock; int dev; int idx; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device_node* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fsi_master*) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device_node*,char*) ;

int FUNC_12(struct fsi_master *VAR_5)
{
 int VAR_6;
 struct device_node *VAR_7;

 FUNC_8(&VAR_5->scan_lock);
 VAR_5->idx = FUNC_6(&VAR_4, 0, VAR_1, VAR_0);
 FUNC_1(&VAR_5->dev, "fsi%d", VAR_5->idx);

 VAR_6 = FUNC_4(&VAR_5->dev);
 if (VAR_6) {
  FUNC_7(&VAR_4, VAR_5->idx);
  return VAR_6;
 }

 VAR_6 = FUNC_2(&VAR_5->dev, &VAR_3);
 if (VAR_6) {
  FUNC_3(&VAR_5->dev);
  FUNC_7(&VAR_4, VAR_5->idx);
  return VAR_6;
 }

 VAR_6 = FUNC_2(&VAR_5->dev, &VAR_2);
 if (VAR_6) {
  FUNC_3(&VAR_5->dev);
  FUNC_7(&VAR_4, VAR_5->idx);
  return VAR_6;
 }

 VAR_7 = FUNC_0(&VAR_5->dev);
 if (!FUNC_11(VAR_7, "no-scan-on-init")) {
  FUNC_9(&VAR_5->scan_lock);
  FUNC_5(VAR_5);
  FUNC_10(&VAR_5->scan_lock);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_uiom_pd {int domain; int lock; int dev_cnt; int devs; } ;
struct usnic_uiom_dev {int link; struct device* dev; } ;
struct device {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct device*) ;
 int FUNC_4 (struct usnic_uiom_dev*) ;
 struct usnic_uiom_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;

int FUNC_10(struct usnic_uiom_pd *VAR_4, struct device *VAR_5)
{
 struct usnic_uiom_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_6->dev = VAR_5;

 VAR_7 = FUNC_1(VAR_4->domain, VAR_5);
 if (VAR_7)
  goto out_free_dev;

 if (!FUNC_2(VAR_5->bus, VAR_3)) {
  FUNC_9("IOMMU of %s does not support cache coherency\n",
    FUNC_0(VAR_5));
  VAR_7 = -VAR_0;
  goto out_detach_device;
 }

 FUNC_7(&VAR_4->lock);
 FUNC_6(&VAR_6->link, &VAR_4->devs);
 VAR_4->dev_cnt++;
 FUNC_8(&VAR_4->lock);

 return 0;

out_detach_device:
 FUNC_3(VAR_4->domain, VAR_5);
out_free_dev:
 FUNC_4(VAR_6);
 return VAR_7;
}

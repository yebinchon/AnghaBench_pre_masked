
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_7__ {int release; struct device_node* of_node; int parent; int * bus; } ;
struct sunxi_rsb_device {TYPE_1__ dev; int rtaddr; int hwaddr; struct sunxi_rsb* rsb; } ;
struct sunxi_rsb {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct sunxi_rsb_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct sunxi_rsb_device* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct sunxi_rsb_device *FUNC_8(struct sunxi_rsb *VAR_5,
  struct device_node *VAR_6, u16 VAR_7, u8 VAR_8)
{
 int VAR_9;
 struct sunxi_rsb_device *VAR_10;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->rsb = VAR_5;
 VAR_10->hwaddr = VAR_7;
 VAR_10->rtaddr = VAR_8;
 VAR_10->dev.bus = &VAR_3;
 VAR_10->dev.parent = VAR_5->dev;
 VAR_10->dev.of_node = VAR_6;
 VAR_10->dev.release = VAR_4;

 FUNC_4(&VAR_10->dev, "%s-%x", VAR_2, VAR_7);

 VAR_9 = FUNC_5(&VAR_10->dev);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_10->dev, "Can't add %s, status %d\n",
   FUNC_3(&VAR_10->dev), VAR_9);
  goto err_device_add;
 }

 FUNC_1(&VAR_10->dev, "device %s registered\n", FUNC_3(&VAR_10->dev));

err_device_add:
 FUNC_7(&VAR_10->dev);

 return FUNC_0(VAR_9);
}

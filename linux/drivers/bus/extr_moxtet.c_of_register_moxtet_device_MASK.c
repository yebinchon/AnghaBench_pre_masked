
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct moxtet_device {size_t idx; TYPE_1__ dev; int id; } ;
struct moxtet {int dev; int * modules; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct moxtet_device* FUNC_0 (int) ;
 size_t VAR_3 ;
 int FUNC_1 (int ,char*,struct device_node*,...) ;
 int FUNC_2 (struct moxtet_device*) ;
 struct moxtet_device* FUNC_3 (struct moxtet*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,size_t*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static struct moxtet_device *
FUNC_8(struct moxtet *VAR_4, struct device_node *VAR_5)
{
 struct moxtet_device *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6) {
  FUNC_1(VAR_4->dev,
   "Moxtet device alloc error for %pOF\n", VAR_5);
  return FUNC_0(-VAR_2);
 }

 VAR_8 = FUNC_6(VAR_5, "reg", &VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4->dev, "%pOF has no valid 'reg' property (%d)\n",
   VAR_5, VAR_8);
  goto err_put;
 }

 VAR_6->idx = VAR_7;

 if (VAR_6->idx >= VAR_3) {
  FUNC_1(VAR_4->dev, "%pOF Moxtet address 0x%x out of range\n",
   VAR_5, VAR_6->idx);
  VAR_8 = -VAR_0;
  goto err_put;
 }

 VAR_6->id = VAR_4->modules[VAR_6->idx];

 if (!VAR_6->id) {
  FUNC_1(VAR_4->dev, "%pOF Moxtet address 0x%x is empty\n", VAR_5,
   VAR_6->idx);
  VAR_8 = -VAR_1;
  goto err_put;
 }

 FUNC_4(VAR_5);
 VAR_6->dev.of_node = VAR_5;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_4->dev,
   "Moxtet device register error for %pOF\n", VAR_5);
  FUNC_5(VAR_5);
  goto err_put;
 }

 return VAR_6;

err_put:
 FUNC_7(&VAR_6->dev);
 return FUNC_0(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smsc47b397_data {int update_lock; int lock; scalar_t__ addr; } ;
struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device*,char*,unsigned long,scalar_t__) ;
 struct device* FUNC_2 (struct device*,char*,struct smsc47b397_data*,int ) ;
 struct smsc47b397_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct smsc47b397_data *VAR_9;
 struct device *VAR_10;
 struct resource *VAR_11;

 VAR_11 = FUNC_6(VAR_7, VAR_3, 0);
 if (!FUNC_4(VAR_8, VAR_11->start, VAR_4,
     VAR_5.driver.name)) {
  FUNC_1(VAR_8, "Region 0x%lx-0x%lx already in use!\n",
   (unsigned long)VAR_11->start,
   (unsigned long)VAR_11->start + VAR_4 - 1);
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_8, sizeof(struct smsc47b397_data), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->addr = VAR_11->start;
 FUNC_5(&VAR_9->lock);
 FUNC_5(&VAR_9->update_lock);

 VAR_10 = FUNC_2(VAR_8, "smsc47b397",
          VAR_9,
          VAR_6);
 return FUNC_0(VAR_10);
}

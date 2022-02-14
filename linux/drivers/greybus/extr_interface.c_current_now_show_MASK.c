
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gb_interface {int dev; int interface_id; TYPE_1__* hd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int svc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;
 struct gb_interface* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct gb_interface *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_4->hd->svc, VAR_4->interface_id,
         VAR_0,
         &VAR_6);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "failed to get current sample (%d)\n", VAR_5);
  return VAR_5;
 }

 return FUNC_2(VAR_3, "%u\n", VAR_6);
}

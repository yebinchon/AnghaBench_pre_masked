
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct ace_device* private_data; } ;
struct ace_device {scalar_t__ media_change; int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct gendisk *VAR_1, unsigned int VAR_2)
{
 struct ace_device *VAR_3 = VAR_1->private_data;
 FUNC_0(VAR_3->dev, "ace_check_events(): %i\n", VAR_3->media_change);

 return VAR_3->media_change ? VAR_0 : 0;
}

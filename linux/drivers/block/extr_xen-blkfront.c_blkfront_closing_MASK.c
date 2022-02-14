
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {scalar_t__ state; } ;
struct block_device {int bd_mutex; scalar_t__ bd_openers; } ;
struct blkfront_info {int mutex; scalar_t__ gd; struct xenbus_device* xbdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct block_device* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xenbus_device*,int ,char*) ;
 int FUNC_5 (struct xenbus_device*) ;
 int FUNC_6 (struct xenbus_device*,scalar_t__) ;
 int FUNC_7 (struct blkfront_info*) ;

__attribute__((used)) static void FUNC_8(struct blkfront_info *VAR_2)
{
 struct xenbus_device *VAR_3 = VAR_2->xbdev;
 struct block_device *VAR_4 = ((void*)0);

 FUNC_2(&VAR_2->mutex);

 if (VAR_3->state == VAR_1) {
  FUNC_3(&VAR_2->mutex);
  return;
 }

 if (VAR_2->gd)
  VAR_4 = FUNC_0(VAR_2->gd, 0);

 FUNC_3(&VAR_2->mutex);

 if (!VAR_4) {
  FUNC_5(VAR_3);
  return;
 }

 FUNC_2(&VAR_4->bd_mutex);

 if (VAR_4->bd_openers) {
  FUNC_4(VAR_3, -VAR_0,
     "Device in use; refusing to close");
  FUNC_6(VAR_3, VAR_1);
 } else {
  FUNC_7(VAR_2);
  FUNC_5(VAR_3);
 }

 FUNC_3(&VAR_4->bd_mutex);
 FUNC_1(VAR_4);
}

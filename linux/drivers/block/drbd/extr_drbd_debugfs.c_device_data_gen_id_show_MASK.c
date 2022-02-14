
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct drbd_device* private; } ;
struct drbd_md {int uuid_lock; int * uuid; } ;
struct drbd_device {TYPE_1__* ldev; } ;
typedef enum drbd_uuid_index { ____Placeholder_drbd_uuid_index } drbd_uuid_index ;
struct TYPE_2__ {struct drbd_md md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drbd_device*,int ) ;
 int FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_4, void *VAR_5)
{
 struct drbd_device *VAR_6 = VAR_4->private;
 struct drbd_md *VAR_7;
 enum drbd_uuid_index VAR_8;

 if (!FUNC_0(VAR_6, VAR_0))
  return -VAR_1;

 VAR_7 = &VAR_6->ldev->md;
 FUNC_3(&VAR_7->uuid_lock);
 for (VAR_8 = VAR_2; VAR_8 <= VAR_3; VAR_8++) {
  FUNC_2(VAR_4, "0x%016llX\n", VAR_7->uuid[VAR_8]);
 }
 FUNC_4(&VAR_7->uuid_lock);
 FUNC_1(VAR_6);
 return 0;
}

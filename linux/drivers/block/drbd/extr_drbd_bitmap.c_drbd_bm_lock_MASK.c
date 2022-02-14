
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {char* bm_why; int bm_flags; TYPE_1__* bm_task; int bm_change; } ;
typedef enum bm_flag { ____Placeholder_bm_flag } bm_flag ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct drbd_device*,char*) ;
 int FUNC_1 (struct drbd_device*,char*,int ,int ,char*,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct drbd_device *VAR_2, char *VAR_3, enum bm_flag VAR_4)
{
 struct drbd_bitmap *VAR_5 = VAR_2->bitmap;
 int VAR_6;

 if (!VAR_5) {
  FUNC_0(VAR_2, "FIXME no bitmap in drbd_bm_lock!?\n");
  return;
 }

 VAR_6 = !FUNC_3(&VAR_5->bm_change);

 if (VAR_6) {
  FUNC_1(VAR_2, "%s[%d] going to '%s' but bitmap already locked for '%s' by %s[%d]\n",
     VAR_1->comm, FUNC_4(VAR_1),
     VAR_3, VAR_5->bm_why ?: "?",
     VAR_5->bm_task->comm, FUNC_4(VAR_5->bm_task));
  FUNC_2(&VAR_5->bm_change);
 }
 if (VAR_0 & VAR_5->bm_flags)
  FUNC_0(VAR_2, "FIXME bitmap already locked in bm_lock\n");
 VAR_5->bm_flags |= VAR_4 & VAR_0;

 VAR_5->bm_why = VAR_3;
 VAR_5->bm_task = VAR_1;
}

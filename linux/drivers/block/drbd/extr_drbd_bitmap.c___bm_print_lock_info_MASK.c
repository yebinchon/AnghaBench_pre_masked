
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {TYPE_1__* bm_task; scalar_t__ bm_why; } ;
struct TYPE_3__ {int comm; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct drbd_device*,char*,int ,int ,char const*,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct drbd_device *VAR_2, const char *VAR_3)
{
 struct drbd_bitmap *VAR_4 = VAR_2->bitmap;
 if (!FUNC_0(&VAR_1))
  return;
 FUNC_1(VAR_2, "FIXME %s[%d] in %s, bitmap locked for '%s' by %s[%d]\n",
   VAR_0->comm, FUNC_2(VAR_0),
   VAR_3, VAR_4->bm_why ?: "?",
   VAR_4->bm_task->comm, FUNC_2(VAR_4->bm_task));
}

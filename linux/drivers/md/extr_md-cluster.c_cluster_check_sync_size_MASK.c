
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nodes; } ;
struct mddev {struct bitmap* bitmap; TYPE_1__ bitmap_info; } ;
struct dlm_lock_resource {int flags; } ;
struct TYPE_8__ {int sb_page; } ;
struct bitmap {TYPE_2__ storage; } ;
struct TYPE_9__ {unsigned long sync_size; } ;
typedef TYPE_3__ bitmap_super_t ;
struct TYPE_10__ {int (* slot_number ) (struct mddev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bitmap*) ;
 int FUNC_1 (struct dlm_lock_resource*,int ) ;
 struct bitmap* FUNC_2 (struct mddev*,int) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_6 (struct mddev*,char*,int *,int) ;
 int FUNC_7 (struct bitmap*) ;
 int FUNC_8 (struct bitmap*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (struct mddev*) ;

__attribute__((used)) static int FUNC_12(struct mddev *VAR_3)
{
 int VAR_4, VAR_5;
 bitmap_super_t *VAR_6;
 unsigned long VAR_7, VAR_8 = 0;
 int VAR_9 = VAR_3->bitmap_info.nodes;
 int VAR_10 = VAR_2->slot_number(VAR_3);
 struct bitmap *VAR_11 = VAR_3->bitmap;
 char VAR_12[64];
 struct dlm_lock_resource *VAR_13;

 VAR_6 = FUNC_3(VAR_11->storage.sb_page);
 VAR_7 = VAR_6->sync_size;
 FUNC_4(VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_9; VAR_4++) {
  if (VAR_4 == VAR_10)
   continue;

  VAR_11 = FUNC_2(VAR_3, VAR_4);
  if (FUNC_0(VAR_11)) {
   FUNC_9("can't get bitmap from slot %d\n", VAR_4);
   return -1;
  }





  FUNC_10(VAR_12, 64, "bitmap%04d", VAR_4);
  VAR_13 = FUNC_6(VAR_3, VAR_12, ((void*)0), 1);
  if (!VAR_13) {
   FUNC_9("md-cluster: Cannot initialize %s\n", VAR_12);
   FUNC_7(VAR_11);
   return -1;
  }
  VAR_13->flags |= VAR_0;
  VAR_5 = FUNC_1(VAR_13, VAR_1);
  if (!VAR_5)
   FUNC_8(VAR_11);
  FUNC_5(VAR_13);

  VAR_6 = FUNC_3(VAR_11->storage.sb_page);
  if (VAR_8 == 0)
   VAR_8 = VAR_6->sync_size;
  else if (VAR_8 != VAR_6->sync_size) {
   FUNC_4(VAR_6);
   FUNC_7(VAR_11);
   return -1;
  }
  FUNC_4(VAR_6);
  FUNC_7(VAR_11);
 }

 return (VAR_7 == VAR_8) ? 0 : -1;
}

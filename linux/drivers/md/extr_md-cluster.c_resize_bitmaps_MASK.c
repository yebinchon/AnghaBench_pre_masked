
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nodes; } ;
struct mddev {TYPE_1__ bitmap_info; struct bitmap* bitmap; } ;
struct dlm_lock_resource {int flags; } ;
struct bitmap_counts {unsigned long pages; } ;
struct bitmap {struct bitmap_counts counts; } ;
typedef int sector_t ;
struct TYPE_4__ {int (* slot_number ) (struct mddev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bitmap*) ;
 int FUNC_1 (struct dlm_lock_resource*,int ) ;
 struct bitmap* FUNC_2 (struct mddev*,int) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_4 (struct mddev*,char*,int *,int) ;
 int FUNC_5 (struct bitmap*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (struct mddev*,int ) ;

__attribute__((used)) static int FUNC_10(struct mddev *VAR_3, sector_t VAR_4, sector_t VAR_5)
{
 struct bitmap_counts *VAR_6;
 char VAR_7[64];
 struct dlm_lock_resource *VAR_8;
 struct bitmap *VAR_9 = VAR_3->bitmap;
 unsigned long VAR_10 = VAR_9->counts.pages;
 int VAR_11, VAR_12;





 VAR_12 = FUNC_9(VAR_3, VAR_4);
 if (VAR_12)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_3->bitmap_info.nodes; VAR_11++) {
  if (VAR_11 == VAR_2->slot_number(VAR_3))
   continue;

  VAR_9 = FUNC_2(VAR_3, VAR_11);
  if (FUNC_0(VAR_9)) {
   FUNC_6("can't get bitmap from slot %d\n", VAR_11);
   goto out;
  }
  VAR_6 = &VAR_9->counts;





  FUNC_7(VAR_7, 64, "bitmap%04d", VAR_11);
  VAR_8 = FUNC_4(VAR_3, VAR_7, ((void*)0), 1);
  if (!VAR_8) {
   FUNC_6("Cannot initialize %s lock\n", VAR_7);
   goto out;
  }
  VAR_8->flags |= VAR_0;
  VAR_12 = FUNC_1(VAR_8, VAR_1);
  if (!VAR_12)
   VAR_6->pages = VAR_10;
  FUNC_3(VAR_8);

  if (VAR_10 != VAR_6->pages)




   goto out;
 }

 return 0;
out:
 FUNC_5(VAR_9);
 FUNC_9(VAR_3, VAR_5);
 return -1;
}

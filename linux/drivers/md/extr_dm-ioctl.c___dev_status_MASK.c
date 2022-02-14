
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct gendisk {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; void* target_count; int event_nr; int open_count; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gendisk*) ;
 struct gendisk* FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 struct dm_table* FUNC_3 (struct mapped_device*,int*) ;
 struct dm_table* FUNC_4 (struct mapped_device*,int*) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*,int) ;
 scalar_t__ FUNC_7 (struct mapped_device*) ;
 scalar_t__ FUNC_8 (struct mapped_device*) ;
 int FUNC_9 (struct dm_table*) ;
 void* FUNC_10 (struct dm_table*) ;
 scalar_t__ FUNC_11 (struct mapped_device*) ;
 scalar_t__ FUNC_12 (struct gendisk*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct mapped_device *VAR_7, struct dm_ioctl *VAR_8)
{
 struct gendisk *VAR_9 = FUNC_1(VAR_7);
 struct dm_table *VAR_10;
 int VAR_11;

 VAR_8->flags &= ~(VAR_5 | VAR_4 |
     VAR_0 | VAR_2);

 if (FUNC_8(VAR_7))
  VAR_8->flags |= VAR_5;

 if (FUNC_7(VAR_7))
  VAR_8->flags |= VAR_2;

 if (FUNC_11(VAR_7))
  VAR_8->flags |= VAR_1;

 VAR_8->dev = FUNC_13(FUNC_0(VAR_9));






 VAR_8->open_count = FUNC_5(VAR_7);

 VAR_8->event_nr = FUNC_2(VAR_7);
 VAR_8->target_count = 0;

 VAR_10 = FUNC_4(VAR_7, &VAR_11);
 if (VAR_10) {
  if (!(VAR_8->flags & VAR_3)) {
   if (FUNC_12(VAR_9))
    VAR_8->flags |= VAR_4;
   VAR_8->target_count = FUNC_10(VAR_10);
  }

  VAR_8->flags |= VAR_0;
 }
 FUNC_6(VAR_7, VAR_11);

 if (VAR_8->flags & VAR_3) {
  int VAR_12;
  VAR_10 = FUNC_3(VAR_7, &VAR_12);
  if (VAR_10) {
   if (!(FUNC_9(VAR_10) & VAR_6))
    VAR_8->flags |= VAR_4;
   VAR_8->target_count = FUNC_10(VAR_10);
  }
  FUNC_6(VAR_7, VAR_12);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hd_struct {int partno; } ;
struct TYPE_9__ {scalar_t__ stamp; int holder_dir; } ;
struct gendisk {int flags; TYPE_3__ part0; int slave_dir; int minors; TYPE_1__* queue; int lookup_sem; } ;
struct disk_part_iter {int dummy; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gendisk*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gendisk*) ;
 int FUNC_6 (int ,int ) ;
 int * VAR_4 ;
 int FUNC_7 (struct gendisk*,int ) ;
 char* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct gendisk*) ;
 int FUNC_11 (struct gendisk*) ;
 int FUNC_12 (struct disk_part_iter*) ;
 int FUNC_13 (struct disk_part_iter*,struct gendisk*,int) ;
 struct hd_struct* FUNC_14 (struct disk_part_iter*) ;
 TYPE_2__* FUNC_15 (struct gendisk*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct gendisk*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct hd_struct*) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (struct gendisk*,int ) ;
 int VAR_5 ;
 int FUNC_23 (int *,char*) ;
 int FUNC_24 (int *) ;

void FUNC_25(struct gendisk *VAR_6)
{
 struct disk_part_iter VAR_7;
 struct hd_struct *VAR_8;

 FUNC_3(VAR_6);
 FUNC_10(VAR_6);





 FUNC_16(&VAR_6->lookup_sem);

 FUNC_13(&VAR_7, VAR_6,
        VAR_0 | VAR_1);
 while ((VAR_8 = FUNC_14(&VAR_7))) {
  FUNC_17(VAR_6, VAR_8->partno);
  FUNC_1(FUNC_19(VAR_8));
  FUNC_7(VAR_6, VAR_8->partno);
 }
 FUNC_12(&VAR_7);

 FUNC_17(VAR_6, 0);
 FUNC_1(FUNC_11(VAR_6));
 FUNC_22(VAR_6, 0);
 VAR_6->flags &= ~VAR_3;
 FUNC_24(&VAR_6->lookup_sem);

 if (!(VAR_6->flags & VAR_2))
  FUNC_23(&FUNC_15(VAR_6)->kobj, "bdi");
 if (VAR_6->queue) {




  if (!(VAR_6->flags & VAR_2))
   FUNC_2(VAR_6->queue->backing_dev_info);
  FUNC_5(VAR_6);
 } else {
  FUNC_0(1);
 }

 if (!(VAR_6->flags & VAR_2))
  FUNC_6(FUNC_11(VAR_6), VAR_6->minors);






 FUNC_4(FUNC_11(VAR_6));

 FUNC_18(VAR_6->part0.holder_dir);
 FUNC_18(VAR_6->slave_dir);

 FUNC_20(&VAR_6->part0, 0);
 VAR_6->part0.stamp = 0;
 if (!VAR_5)
  FUNC_23(VAR_4, FUNC_8(FUNC_15(VAR_6)));
 FUNC_21(FUNC_15(VAR_6), 0);
 FUNC_9(FUNC_15(VAR_6));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gendisk {int flags; TYPE_1__* queue; scalar_t__ minors; scalar_t__ first_minor; scalar_t__ major; int part0; } ;
struct device {int dummy; } ;
struct attribute_group {int dummy; } ;
typedef int dev_t ;
struct TYPE_6__ {int devt; } ;
struct TYPE_5__ {int backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct gendisk*) ;
 int FUNC_8 (struct gendisk*) ;
 int FUNC_9 (int ,scalar_t__,int *,int ,int ,struct gendisk*) ;
 int FUNC_10 (struct gendisk*) ;
 int FUNC_11 (struct gendisk*) ;
 int FUNC_12 (struct gendisk*) ;
 TYPE_2__* FUNC_13 (struct gendisk*) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (struct device*,struct gendisk*,struct attribute_group const**) ;

__attribute__((used)) static void FUNC_16(struct device *VAR_7, struct gendisk *VAR_8,
         const struct attribute_group **VAR_9,
         bool VAR_10)
{
 dev_t VAR_11;
 int VAR_12;







 if (VAR_10)
  FUNC_14(VAR_8->queue);





 FUNC_2(VAR_8->minors && !(VAR_8->major || VAR_8->first_minor));
 FUNC_2(!VAR_8->minors &&
  !(VAR_8->flags & (VAR_0 | VAR_1)));

 VAR_8->flags |= VAR_4;

 VAR_12 = FUNC_5(&VAR_8->part0, &VAR_11);
 if (VAR_12) {
  FUNC_2(1);
  return;
 }
 VAR_8->major = FUNC_0(VAR_11);
 VAR_8->first_minor = FUNC_1(VAR_11);

 FUNC_11(VAR_8);

 if (VAR_8->flags & VAR_1) {




  VAR_8->flags |= VAR_3;
  VAR_8->flags |= VAR_2;
 } else {
  int VAR_13;


  FUNC_13(VAR_8)->devt = VAR_11;
  VAR_13 = FUNC_4(VAR_8->queue->backing_dev_info,
      FUNC_13(VAR_8));
  FUNC_2(VAR_13);
  FUNC_9(FUNC_12(VAR_8), VAR_8->minors, ((void*)0),
        VAR_6, VAR_5, VAR_8);
 }
 FUNC_15(VAR_7, VAR_8, VAR_9);
 if (VAR_10)
  FUNC_8(VAR_8);





 FUNC_3(!FUNC_6(VAR_8->queue));

 FUNC_10(VAR_8);
 FUNC_7(VAR_8);
}

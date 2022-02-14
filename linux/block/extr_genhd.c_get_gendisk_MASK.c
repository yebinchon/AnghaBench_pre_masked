
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hd_struct {int partno; } ;
struct gendisk {int flags; int lookup_sem; } ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct gendisk* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct gendisk*) ;
 struct hd_struct* FUNC_6 (int *,int ) ;
 struct kobject* FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (struct kobject*) ;
 struct gendisk* FUNC_9 (struct hd_struct*) ;
 int FUNC_10 (struct gendisk*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;

struct gendisk *FUNC_15(dev_t VAR_6, int *VAR_7)
{
 struct gendisk *VAR_8 = ((void*)0);

 if (FUNC_0(VAR_6) != VAR_0) {
  struct kobject *VAR_9;

  VAR_9 = FUNC_7(VAR_3, VAR_6, VAR_7);
  if (VAR_9)
   VAR_8 = FUNC_3(FUNC_8(VAR_9));
 } else {
  struct hd_struct *VAR_10;

  FUNC_11(&VAR_5);
  VAR_10 = FUNC_6(&VAR_4, FUNC_2(FUNC_1(VAR_6)));
  if (VAR_10 && FUNC_5(FUNC_9(VAR_10))) {
   *VAR_7 = VAR_10->partno;
   VAR_8 = FUNC_9(VAR_10);
  }
  FUNC_12(&VAR_5);
 }

 if (!VAR_8)
  return ((void*)0);





 FUNC_4(&VAR_8->lookup_sem);
 if (FUNC_13((VAR_8->flags & VAR_1) ||
       !(VAR_8->flags & VAR_2))) {
  FUNC_14(&VAR_8->lookup_sem);
  FUNC_10(VAR_8);
  VAR_8 = ((void*)0);
 } else {
  FUNC_14(&VAR_8->lookup_sem);
 }
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {scalar_t__ partno; } ;
struct gendisk {scalar_t__ minors; scalar_t__ first_minor; int major; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct hd_struct*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct gendisk* FUNC_5 (struct hd_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct hd_struct *VAR_8, dev_t *VAR_9)
{
 struct gendisk *VAR_10 = FUNC_5(VAR_8);
 int VAR_11;


 if (VAR_8->partno < VAR_10->minors) {
  *VAR_9 = FUNC_0(VAR_10->major, VAR_10->first_minor + VAR_8->partno);
  return 0;
 }


 FUNC_3(VAR_3);

 FUNC_6(&VAR_7);
 VAR_11 = FUNC_2(&VAR_6, VAR_8, 0, VAR_5, VAR_4);
 FUNC_7(&VAR_7);

 FUNC_4();
 if (VAR_11 < 0)
  return VAR_11 == -VAR_2 ? -VAR_1 : VAR_11;

 *VAR_9 = FUNC_0(VAR_0, FUNC_1(VAR_11));
 return 0;
}

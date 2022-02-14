
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mapped_device* queuedata; } ;
struct mapped_device {int flags; } ;
struct dm_table {int dummy; } ;
struct bio {int bi_opf; } ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*) ;
 struct dm_table* FUNC_1 (struct mapped_device*,int*) ;
 int FUNC_2 (struct mapped_device*,struct dm_table*,struct bio*) ;
 int FUNC_3 (struct mapped_device*,int) ;
 int FUNC_4 (struct mapped_device*,struct bio*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static blk_qc_t FUNC_7(struct request_queue *VAR_3, struct bio *VAR_4)
{
 struct mapped_device *VAR_5 = VAR_3->queuedata;
 blk_qc_t VAR_6 = VAR_0;
 int VAR_7;
 struct dm_table *VAR_8;

 VAR_8 = FUNC_1(VAR_5, &VAR_7);


 if (FUNC_6(FUNC_5(VAR_1, &VAR_5->flags))) {
  FUNC_3(VAR_5, VAR_7);

  if (!(VAR_4->bi_opf & VAR_2))
   FUNC_4(VAR_5, VAR_4);
  else
   FUNC_0(VAR_4);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_8, VAR_4);

 FUNC_3(VAR_5, VAR_7);
 return VAR_6;
}

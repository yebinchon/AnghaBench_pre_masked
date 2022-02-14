
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct pblk* queuedata; } ;
struct pblk {int rl; } ;
struct bio {int bi_opf; } ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct request_queue*,struct bio**) ;
 int FUNC_4 (struct pblk*,struct bio*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct pblk*,struct bio*) ;
 int FUNC_8 (struct pblk*,struct bio*,int ) ;

__attribute__((used)) static blk_qc_t FUNC_9(struct request_queue *VAR_5, struct bio *VAR_6)
{
 struct pblk *VAR_7 = VAR_5->queuedata;

 if (FUNC_2(VAR_6) == VAR_3) {
  FUNC_4(VAR_7, VAR_6);
  if (!(VAR_6->bi_opf & VAR_4)) {
   FUNC_1(VAR_6);
   return VAR_0;
  }
 }




 if (FUNC_0(VAR_6) == VAR_2) {
  FUNC_3(VAR_5, &VAR_6);
  FUNC_7(VAR_7, VAR_6);
 } else {




  if (FUNC_5(VAR_6) > FUNC_6(&VAR_7->rl))
   FUNC_3(VAR_5, &VAR_6);

  FUNC_8(VAR_7, VAR_6, VAR_1);
 }

 return VAR_0;
}

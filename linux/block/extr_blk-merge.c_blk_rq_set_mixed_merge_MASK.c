
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {unsigned int cmd_flags; int rq_flags; struct bio* bio; } ;
struct bio {unsigned int bi_opf; struct bio* bi_next; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(struct request *VAR_2)
{
 unsigned int VAR_3 = VAR_2->cmd_flags & VAR_0;
 struct bio *VAR_4;

 if (VAR_2->rq_flags & VAR_1)
  return;






 for (VAR_4 = VAR_2->bio; VAR_4; VAR_4 = VAR_4->bi_next) {
  FUNC_0((VAR_4->bi_opf & VAR_0) &&
        (VAR_4->bi_opf & VAR_0) != VAR_3);
  VAR_4->bi_opf |= VAR_3;
 }
 VAR_2->rq_flags |= VAR_1;
}

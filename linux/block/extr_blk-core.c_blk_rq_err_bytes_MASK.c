
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {unsigned int cmd_flags; int rq_flags; struct bio* bio; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {unsigned int bi_opf; TYPE_1__ bi_iter; struct bio* bi_next; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct request const*) ;

unsigned int FUNC_2(const struct request *VAR_2)
{
 unsigned int VAR_3 = VAR_2->cmd_flags & VAR_0;
 unsigned int VAR_4 = 0;
 struct bio *VAR_5;

 if (!(VAR_2->rq_flags & VAR_1))
  return FUNC_1(VAR_2);
 for (VAR_5 = VAR_2->bio; VAR_5; VAR_5 = VAR_5->bi_next) {
  if ((VAR_5->bi_opf & VAR_3) != VAR_3)
   break;
  VAR_4 += VAR_5->bi_iter.bi_size;
 }


 FUNC_0(FUNC_1(VAR_2) && !VAR_4);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int const cmd_flags; int __data_len; struct bio* biotail; int q; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {int const bi_opf; TYPE_1__ bi_iter; struct bio* bi_next; } ;


 int const VAR_0 ;
 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*,struct bio*,unsigned int) ;
 int FUNC_3 (int ,struct request*,struct bio*) ;
 int FUNC_4 (int ,struct request*,struct bio*) ;

bool FUNC_5(struct request *VAR_1, struct bio *VAR_2,
  unsigned int VAR_3)
{
 const int VAR_4 = VAR_2->bi_opf & VAR_0;

 if (!FUNC_2(VAR_1, VAR_2, VAR_3))
  return 0;

 FUNC_4(VAR_1->q, VAR_1, VAR_2);
 FUNC_3(VAR_1->q, VAR_1, VAR_2);

 if ((VAR_1->cmd_flags & VAR_0) != VAR_4)
  FUNC_1(VAR_1);

 VAR_1->biotail->bi_next = VAR_2;
 VAR_1->biotail = VAR_2;
 VAR_1->__data_len += VAR_2->bi_iter.bi_size;

 FUNC_0(VAR_1, 0);
 return 1;
}

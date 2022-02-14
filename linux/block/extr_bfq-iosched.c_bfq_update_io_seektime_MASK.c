
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bfq_queue {int seek_history; int wr_coeff; scalar_t__ wr_cur_max_time; int last_request_pos; } ;
struct bfq_data {scalar_t__ bfq_wr_rt_max_time; } ;


 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_data*,int ,struct request*) ;
 int FUNC_2 (struct bfq_queue*) ;

__attribute__((used)) static void
FUNC_3(struct bfq_data *VAR_0, struct bfq_queue *VAR_1,
         struct request *VAR_2)
{
 VAR_1->seek_history <<= 1;
 VAR_1->seek_history |= FUNC_1(VAR_0, VAR_1->last_request_pos, VAR_2);

 if (VAR_1->wr_coeff > 1 &&
     VAR_1->wr_cur_max_time == VAR_0->bfq_wr_rt_max_time &&
     FUNC_0(VAR_1))
  FUNC_2(VAR_1);
}

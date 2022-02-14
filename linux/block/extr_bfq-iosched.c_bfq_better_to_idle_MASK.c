
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {struct bfq_data* bfqd; } ;
struct bfq_data {scalar_t__ bfq_slice_idle; int strict_guarantees; } ;


 int FUNC_0 (struct bfq_queue*) ;
 scalar_t__ FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_3 (struct bfq_data*,struct bfq_queue*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct bfq_queue *VAR_0)
{
 struct bfq_data *VAR_1 = VAR_0->bfqd;
 bool VAR_2, VAR_3;

 if (FUNC_4(VAR_1->strict_guarantees))
  return 1;
 if (VAR_1->bfq_slice_idle == 0 || !FUNC_0(VAR_0) ||
    FUNC_1(VAR_0))
  return 0;

 VAR_2 =
  FUNC_2(VAR_1, VAR_0);

 VAR_3 =
  FUNC_3(VAR_1, VAR_0);







 return VAR_2 ||
  VAR_3;
}

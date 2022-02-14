
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cnt; } ;
struct ocrdma_srq {int bit_fields_len; TYPE_1__ rq; scalar_t__* idx_bit_fields; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ocrdma_srq*,int) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_srq *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->bit_fields_len; VAR_1++) {
  if (VAR_0->idx_bit_fields[VAR_1]) {
   VAR_2 = FUNC_1(VAR_0->idx_bit_fields[VAR_1]);
   VAR_2 = (VAR_1 * 32) + (VAR_2 - 1);
   FUNC_0(VAR_2 >= VAR_0->rq.max_cnt);
   FUNC_2(VAR_0, VAR_2);
   break;
  }
 }

 FUNC_0(VAR_1 == VAR_0->bit_fields_len);
 return VAR_2 + 1;
}

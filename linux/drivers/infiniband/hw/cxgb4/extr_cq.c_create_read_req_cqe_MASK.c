
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* oldest_read; } ;
struct t4_wq {TYPE_3__ sq; } ;
struct TYPE_5__ {int cidx; } ;
struct TYPE_6__ {TYPE_1__ scqe; } ;
struct t4_cqe {int bits_type_ts; void* header; void* len; TYPE_2__ u; } ;
struct TYPE_8__ {int read_len; int idx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct t4_cqe*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (struct t4_cqe*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct t4_wq *VAR_1, struct t4_cqe *VAR_2,
  struct t4_cqe *VAR_3)
{
 VAR_3->u.scqe.cidx = VAR_1->sq.oldest_read->idx;
 VAR_3->len = FUNC_6(VAR_1->sq.oldest_read->read_len);
 VAR_3->header = FUNC_6(FUNC_2(FUNC_1(VAR_2)) |
   FUNC_3(FUNC_5(VAR_2)) |
   FUNC_0(VAR_0) |
   FUNC_4(1));
 VAR_3->bits_type_ts = VAR_2->bits_type_ts;
}

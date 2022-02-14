
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct t4_swsqe {scalar_t__ flushed; scalar_t__ signaled; int cqe; scalar_t__ complete; scalar_t__ opcode; } ;
struct t4_sq {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct t4_sq *VAR_2, u16 VAR_3,
        struct t4_swsqe *VAR_4)
{
 if (FUNC_1(VAR_1, "idx", VAR_3))
  goto err;
 if (FUNC_1(VAR_1, "opcode", VAR_4->opcode))
  goto err;
 if (FUNC_1(VAR_1, "complete", VAR_4->complete))
  goto err;
 if (VAR_4->complete &&
     FUNC_1(VAR_1, "cqe_status", FUNC_0(&VAR_4->cqe)))
  goto err;
 if (FUNC_1(VAR_1, "signaled", VAR_4->signaled))
  goto err;
 if (FUNC_1(VAR_1, "flushed", VAR_4->flushed))
  goto err;
 return 0;
err:
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_wq {scalar_t__ sq_rptr; scalar_t__ sq_wptr; int sq_size_log2; struct t3_swsq* sq; } ;
struct t3_swsq {scalar_t__ signaled; } ;
struct t3_cq {int dummy; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct t3_wq*,struct t3_cq*,struct t3_swsq*) ;

int FUNC_2(struct t3_wq *VAR_0, struct t3_cq *VAR_1, int VAR_2)
{
 __u32 VAR_3 = VAR_0->sq_rptr + VAR_2;
 int VAR_4 = 0;
 struct t3_swsq *VAR_5 = VAR_0->sq + FUNC_0(VAR_3, VAR_0->sq_size_log2);

 while (VAR_3 != VAR_0->sq_wptr) {
  VAR_5->signaled = 0;
  FUNC_1(VAR_0, VAR_1, VAR_5);
  VAR_3++;
  VAR_5 = VAR_0->sq + FUNC_0(VAR_3, VAR_0->sq_size_log2);
  VAR_4++;
 }
 return VAR_4;
}

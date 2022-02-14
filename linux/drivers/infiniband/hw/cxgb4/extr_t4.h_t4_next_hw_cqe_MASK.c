
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct t4_cqe {scalar_t__ bits_type_ts; } ;
struct t4_cq {int cidx; size_t size; scalar_t__ bits_type_ts; int error; struct t4_cqe* queue; int cqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct t4_cq*,struct t4_cqe*) ;

__attribute__((used)) static inline int FUNC_3(struct t4_cq *VAR_2, struct t4_cqe **VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 if (VAR_2->cidx == 0)
  VAR_5 = VAR_2->size - 1;
 else
  VAR_5 = VAR_2->cidx - 1;

 if (VAR_2->queue[VAR_5].bits_type_ts != VAR_2->bits_type_ts) {
  VAR_4 = -VAR_1;
  VAR_2->error = 1;
  FUNC_0("cq overflow cqid %u\n", VAR_2->cqid);
 } else if (FUNC_2(VAR_2, &VAR_2->queue[VAR_2->cidx])) {


  FUNC_1();
  *VAR_3 = &VAR_2->queue[VAR_2->cidx];
  VAR_4 = 0;
 } else
  VAR_4 = -VAR_0;
 return VAR_4;
}

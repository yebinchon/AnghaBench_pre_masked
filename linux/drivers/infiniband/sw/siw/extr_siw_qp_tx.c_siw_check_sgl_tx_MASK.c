
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_sge; struct siw_sge* sge; } ;
struct siw_wqe {int * mem; TYPE_1__ sqe; } ;
struct siw_sge {scalar_t__ length; } ;
struct ib_pd {int dummy; } ;
typedef enum ib_access_flags { ____Placeholder_ib_access_flags } ib_access_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_pd*,struct siw_sge*,int *,int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ib_pd *VAR_3, struct siw_wqe *VAR_4,
       enum ib_access_flags VAR_5)
{
 struct siw_sge *VAR_6 = &VAR_4->sqe.sge[0];
 int VAR_7, VAR_8, VAR_9 = VAR_4->sqe.num_sge;

 if (FUNC_1(VAR_9 > VAR_2))
  return -VAR_0;

 for (VAR_7 = 0, VAR_8 = 0; VAR_9; VAR_9--, VAR_7++, VAR_6++) {



  if (VAR_6->length) {
   int VAR_10 = FUNC_0(VAR_3, VAR_6, &VAR_4->mem[VAR_7], VAR_5, 0,
            VAR_6->length);

   if (FUNC_1(VAR_10 != VAR_1))
    return VAR_10;
  }
  VAR_8 += VAR_6->length;
 }
 return VAR_8;
}

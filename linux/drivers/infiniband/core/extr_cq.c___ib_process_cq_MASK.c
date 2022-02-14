
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_wc {scalar_t__ status; TYPE_1__* wr_cqe; } ;
struct ib_cq {int dummy; } ;
struct TYPE_2__ {int (* done ) (struct ib_cq*,struct ib_wc*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_cq*,int ,struct ib_wc*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct ib_cq*,struct ib_wc*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ib_cq *VAR_2, int VAR_3, struct ib_wc *VAR_4,
      int VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;






 while ((VAR_7 = FUNC_1(VAR_2, FUNC_2(VAR_1, VAR_5,
      VAR_3 - VAR_8), VAR_4)) > 0) {
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   struct ib_wc *VAR_9 = &VAR_4[VAR_6];

   if (VAR_9->wr_cqe)
    VAR_9->wr_cqe->done(VAR_2, VAR_9);
   else
    FUNC_0(VAR_9->status == VAR_0);
  }

  VAR_8 += VAR_7;

  if (VAR_7 != VAR_5 || (VAR_3 != -1 && VAR_8 >= VAR_3))
   break;
 }

 return VAR_8;
}

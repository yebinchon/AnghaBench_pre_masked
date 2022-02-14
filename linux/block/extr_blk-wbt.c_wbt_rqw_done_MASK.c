
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int wb_background; int wb_normal; scalar_t__ wc; } ;
struct rq_wait {int wait; int inflight; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rq_wb*) ;
 int FUNC_2 (struct rq_wb*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rq_wb*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rq_wb *VAR_1, struct rq_wait *VAR_2,
    enum wbt_flags VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(&VAR_2->inflight);





 if (FUNC_3(!FUNC_1(VAR_1))) {
  FUNC_2(VAR_1);
  return;
 }






 if (VAR_3 & VAR_0)
  VAR_5 = VAR_1->wb_background;
 else if (VAR_1->wc && !FUNC_5(VAR_1))
  VAR_5 = 0;
 else
  VAR_5 = VAR_1->wb_normal;




 if (VAR_4 && VAR_4 >= VAR_5)
  return;

 if (FUNC_6(&VAR_2->wait)) {
  int VAR_6 = VAR_5 - VAR_4;

  if (!VAR_4 || VAR_6 >= VAR_1->wb_background / 2)
   FUNC_4(&VAR_2->wait);
 }
}

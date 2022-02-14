
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbt_wait_data {int wb_acct; unsigned long rw; struct rq_wb* rwb; } ;
struct rq_wb {int dummy; } ;
struct rq_wait {int dummy; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 struct rq_wait* FUNC_0 (struct rq_wb*,int) ;
 int FUNC_1 (struct rq_wait*,struct wbt_wait_data*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct rq_wb *VAR_2, enum wbt_flags VAR_3,
         unsigned long VAR_4)
{
 struct rq_wait *VAR_5 = FUNC_0(VAR_2, VAR_3);
 struct wbt_wait_data VAR_6 = {
  .rwb = VAR_2,
  .wb_acct = VAR_3,
  .rw = VAR_4,
 };

 FUNC_1(VAR_5, &VAR_6, VAR_1, VAR_0);
}

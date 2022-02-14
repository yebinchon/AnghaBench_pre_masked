
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int dummy; } ;
struct bio {int dummy; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rq_wb*) ;
 scalar_t__ FUNC_3 (struct rq_wb*,struct bio*) ;

__attribute__((used)) static enum wbt_flags FUNC_4(struct rq_wb *VAR_6, struct bio *VAR_7)
{
 enum wbt_flags VAR_8 = 0;

 if (!FUNC_2(VAR_6))
  return 0;

 if (FUNC_0(VAR_7) == VAR_1) {
  VAR_8 = VAR_4;
 } else if (FUNC_3(VAR_6, VAR_7)) {
  if (FUNC_1())
   VAR_8 |= VAR_3;
  if (FUNC_0(VAR_7) == VAR_0)
   VAR_8 |= VAR_2;
  VAR_8 |= VAR_5;
 }
 return VAR_8;
}

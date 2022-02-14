
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {struct rq_wait* rq_wait; } ;
struct rq_wait {int dummy; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static inline struct rq_wait *FUNC_0(struct rq_wb *VAR_5,
       enum wbt_flags VAR_6)
{
 if (VAR_6 & VAR_1)
  return &VAR_5->rq_wait[VAR_4];
 else if (VAR_6 & VAR_0)
  return &VAR_5->rq_wait[VAR_3];

 return &VAR_5->rq_wait[VAR_2];
}

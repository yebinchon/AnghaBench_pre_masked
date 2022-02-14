
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rq_wb {int sync_cookie; int sync_issue; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u64 FUNC_3(struct rq_wb *VAR_0)
{
 u64 VAR_1, VAR_2 = FUNC_0(VAR_0->sync_issue);

 if (!VAR_2 || !VAR_0->sync_cookie)
  return 0;

 VAR_1 = FUNC_2(FUNC_1());
 return VAR_1 - VAR_2;
}

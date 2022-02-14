
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {scalar_t__ last_comp; scalar_t__ last_issue; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long const,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct rq_wb *VAR_2)
{
 const unsigned long VAR_3 = VAR_1;

 return FUNC_0(VAR_3, VAR_2->last_issue + VAR_0 / 10) ||
  FUNC_0(VAR_3, VAR_2->last_comp + VAR_0 / 10);
}

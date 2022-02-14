
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct athstatfoo_p {int req; } ;
struct athstatfoo {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct athstatfoo *VAR_0)
{
 struct athstatfoo_p *VAR_1 = (struct athstatfoo_p *) VAR_0;

 if (FUNC_0(&VAR_1->req) < 0)
  FUNC_1(-1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_opt_csb {int dummy; } ;
struct TestContext {int nr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (struct TestContext*,struct nmreq_opt_csb*) ;
 scalar_t__ FUNC_3 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_4(struct TestContext *VAR_1)
{
 struct nmreq_opt_csb VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, &VAR_2);
 if (VAR_3 != 0) {
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != 0) {
  return VAR_3;
 }
 FUNC_0(VAR_1);





 VAR_1->nr_flags &= ~VAR_0;

 return (FUNC_3(VAR_1) != 0) ? 0 : -1;
}

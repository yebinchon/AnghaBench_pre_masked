
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_opt_csb {int dummy; } ;
struct TestContext {int dummy; } ;


 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (struct TestContext*,struct nmreq_opt_csb*) ;
 int FUNC_3 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_4(struct TestContext *VAR_0)
{
 struct nmreq_opt_csb VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, &VAR_1);
 if (VAR_2 != 0) {
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 != 0) {
  return VAR_2;
 }
 FUNC_0(VAR_0);

 return FUNC_3(VAR_0);
}

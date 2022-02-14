
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_3(struct TestContext *VAR_1)
{
 int VAR_2;

 VAR_1->nr_flags |= VAR_0;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != 0) {
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0) {
  return VAR_2;
 }

 return FUNC_2(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int dummy; } ;


 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_2(struct TestContext *VAR_0)
{
 int VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)) != 0) {
  return VAR_1;
 }

 return FUNC_1(VAR_0);
}

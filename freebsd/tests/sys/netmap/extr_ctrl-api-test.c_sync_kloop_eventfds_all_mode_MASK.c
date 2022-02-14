
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct TestContext {int sync_kloop_mode; } ;


 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_2(struct TestContext *VAR_0,
        uint32_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != 0) {
  return VAR_2;
 }

 VAR_0->sync_kloop_mode = VAR_1;

 return FUNC_1(VAR_0);
}

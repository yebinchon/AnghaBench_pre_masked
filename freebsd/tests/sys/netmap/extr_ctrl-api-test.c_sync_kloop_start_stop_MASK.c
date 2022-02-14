
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int dummy; } ;
typedef int pthread_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int *,int ,struct TestContext*) ;
 int FUNC_2 (int ,void**) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct TestContext*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct TestContext *VAR_3)
{
 pthread_t VAR_4;
 void *VAR_5 = VAR_0;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_4, ((void*)0), VAR_2, VAR_3);
 if (VAR_6 != 0) {
  FUNC_0("pthread_create(kloop): %s\n", FUNC_3(VAR_6));
  return -1;
 }

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 != 0) {
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_0("pthread_join(kloop): %s\n", FUNC_3(VAR_6));
 }

 return VAR_5 == VAR_1 ? 0 : -1;
}

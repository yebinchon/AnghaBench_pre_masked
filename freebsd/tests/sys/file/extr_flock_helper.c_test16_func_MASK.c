
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int tc_fl; int tc_fd; } ;


 int VAR_0 ;
 uintptr_t FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void *
FUNC_2(void *VAR_1)
{
 uintptr_t VAR_2;
 struct test_ctx *VAR_3 = VAR_1;

 VAR_2 = FUNC_0(VAR_3->tc_fd, VAR_0, &VAR_3->tc_fl);

 FUNC_1((void *)VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int fd; int * csb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct TestContext *VAR_0)
{
 if (VAR_0->csb) {
  FUNC_1(VAR_0->csb);
  VAR_0->csb = ((void*)0);
 }

 FUNC_0(VAR_0->fd);
 VAR_0->fd = -1;
}

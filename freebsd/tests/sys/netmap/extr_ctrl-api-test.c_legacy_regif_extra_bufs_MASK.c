
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_extra_bufs; int nr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct TestContext*,int ) ;

__attribute__((used)) static int
FUNC_1(struct TestContext *VAR_2)
{
 VAR_2->nr_mode = VAR_1;
 VAR_2->nr_extra_bufs = 20;
 return FUNC_0(VAR_2, VAR_0);
}

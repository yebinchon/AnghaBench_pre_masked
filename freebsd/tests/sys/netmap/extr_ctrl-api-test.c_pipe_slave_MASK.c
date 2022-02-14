
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_mode; int ifname_ext; } ;


 int VAR_0 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct TestContext *VAR_1)
{
 FUNC_1(VAR_1->ifname_ext, "}pipeid2", sizeof(VAR_1->ifname_ext));
 VAR_1->nr_mode = VAR_0;

 return FUNC_0(VAR_1);
}

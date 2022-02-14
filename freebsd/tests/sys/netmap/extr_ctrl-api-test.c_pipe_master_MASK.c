
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_mode; int ifname_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct TestContext *VAR_2)
{
 FUNC_2(VAR_2->ifname_ext, "{pipeid1", sizeof(VAR_2->ifname_ext));
 VAR_2->nr_mode = VAR_1;

 if (FUNC_0(VAR_2) == 0) {
  FUNC_1("pipes should not accept NR_REG_NIC_SW\n");
  return -1;
 }
 VAR_2->nr_mode = VAR_0;

 return FUNC_0(VAR_2);
}

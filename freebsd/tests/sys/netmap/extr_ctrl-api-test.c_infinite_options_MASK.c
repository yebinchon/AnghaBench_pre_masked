
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_option {int nro_reqtype; uintptr_t nro_next; } ;
struct TestContext {char* ifname_ext; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct TestContext*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct TestContext*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct nmreq_option*,struct TestContext*) ;

__attribute__((used)) static int
FUNC_4(struct TestContext *VAR_2)
{
 struct nmreq_option VAR_3;

 FUNC_2("Testing infinite list of options on %s\n", VAR_2->ifname_ext);

 VAR_3.nro_reqtype = 1234;
 FUNC_3(&VAR_3, VAR_2);
 VAR_3.nro_next = (uintptr_t)&VAR_3;
 if (FUNC_1(VAR_2) >= 0)
  return -1;
 FUNC_0(VAR_2);
 return (VAR_1 == VAR_0 ? 0 : -1);
}

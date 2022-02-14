
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_option {int nro_reqtype; int nro_status; } ;
struct TestContext {char* ifname_ext; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (struct nmreq_option*,struct nmreq_option*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (struct nmreq_option*,int ,int) ;
 scalar_t__ FUNC_3 (struct TestContext*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (struct nmreq_option*,struct TestContext*) ;

__attribute__((used)) static int
FUNC_6(struct TestContext *VAR_1)
{
 struct nmreq_option VAR_2, VAR_3;

 FUNC_4("Testing unsupported option on %s\n", VAR_1->ifname_ext);

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.nro_reqtype = 1234;
 FUNC_5(&VAR_2, VAR_1);
 VAR_3 = VAR_2;

 if (FUNC_3(VAR_1) >= 0)
  return -1;

 FUNC_1(VAR_1);
 VAR_3.nro_status = VAR_0;
 return FUNC_0(&VAR_2, &VAR_3);
}

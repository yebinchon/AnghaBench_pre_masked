
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {int nr_extra_bufs; int nr_mode; int ifname_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct TestContext*,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct TestContext *VAR_2)
{
 FUNC_1(VAR_2->ifname_ext, "{pipeexbuf", sizeof(VAR_2->ifname_ext));
 VAR_2->nr_mode = VAR_1;
 VAR_2->nr_extra_bufs = 58;

 return FUNC_0(VAR_2, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TestContext {scalar_t__ nr_hdr_len; int nr_mode; int ifname_ext; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct TestContext*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct TestContext *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3->ifname_ext, "vale:eph0", sizeof(VAR_3->ifname_ext));
 VAR_3->nr_mode = VAR_0;
 if ((VAR_4 = FUNC_1(VAR_3))) {
  return VAR_4;
 }

 VAR_3->nr_hdr_len = VAR_2;
 if ((VAR_4 = FUNC_0(VAR_3))) {
  return VAR_4;
 }
 VAR_3->nr_hdr_len = 0;
 if ((VAR_4 = FUNC_0(VAR_3))) {
  return VAR_4;
 }
 VAR_3->nr_hdr_len = VAR_1;
 if ((VAR_4 = FUNC_0(VAR_3))) {
  return VAR_4;
 }
 return 0;
}

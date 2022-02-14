
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_version {scalar_t__ major; scalar_t__ minor; } ;
struct ldc_channel {scalar_t__ hs_state; struct ldc_version ver; } ;


 int VAR_0 ;
 int FUNC_0 (struct ldc_channel*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ldc_version* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ldc_version*,int ,int) ;
 int FUNC_4 (struct ldc_channel*,struct ldc_version*) ;
 int FUNC_5 (struct ldc_channel*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ldc_channel *VAR_3, struct ldc_version *VAR_4)
{
 struct ldc_version *VAR_5;
 int VAR_6;

 FUNC_2(VAR_0, "GOT VERSION INFO major[%x] minor[%x]\n",
        VAR_4->major, VAR_4->minor);

 if (VAR_3->hs_state == VAR_1) {
  VAR_3->hs_state = VAR_2;
  FUNC_3(&VAR_3->ver, 0, sizeof(VAR_3->ver));
 }

 VAR_5 = FUNC_1(VAR_4->major);
 if (!VAR_5) {
  VAR_6 = FUNC_5(VAR_3, 0, 0);
 } else if (VAR_5->major != VAR_4->major) {
  VAR_6 = FUNC_5(VAR_3, VAR_5->major, VAR_5->minor);
 } else {
  struct ldc_version VAR_7 = *VAR_4;
  if (VAR_7.minor > VAR_5->minor)
   VAR_7.minor = VAR_5->minor;
  VAR_6 = FUNC_4(VAR_3, &VAR_7);
  if (!VAR_6) {
   VAR_3->ver = VAR_7;
   VAR_3->hs_state = VAR_1;
  }
 }
 if (VAR_6)
  return FUNC_0(VAR_3);

 return 0;
}

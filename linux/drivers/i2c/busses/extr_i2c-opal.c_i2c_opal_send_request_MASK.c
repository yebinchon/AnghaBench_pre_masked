
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct opal_msg {int dummy; } ;
struct opal_i2c_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct opal_msg*) ;
 int FUNC_4 (struct opal_msg) ;
 int FUNC_5 (int,int ,struct opal_i2c_request*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(u32 VAR_3, struct opal_i2c_request *VAR_4)
{
 struct opal_msg VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1();
 if (VAR_6 < 0) {
  if (VAR_6 != -VAR_0)
   FUNC_6("Failed to get the async token\n");

  return VAR_6;
 }

 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4);
 if (VAR_7 != VAR_1) {
  VAR_7 = FUNC_0(VAR_7);
  goto exit;
 }

 VAR_7 = FUNC_3(VAR_6, &VAR_5);
 if (VAR_7)
  goto exit;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 != VAR_2) {
  VAR_7 = FUNC_0(VAR_7);
  goto exit;
 }

exit:
 FUNC_2(VAR_6);
 return VAR_7;
}

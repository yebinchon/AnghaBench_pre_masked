
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_msg {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct opal_msg*) ;
 int FUNC_3 (struct opal_msg) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct opal_msg VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0();
 if (VAR_5 < 0) {
  if (VAR_5 != -VAR_0)
   FUNC_5("Couldn't get OPAL async token [token=%d]\n",
    VAR_5);
  return VAR_5;
 }

 VAR_4 = FUNC_4(VAR_5, VAR_2, VAR_1);
 switch (VAR_4) {
 case 129:
  VAR_4 = FUNC_2(VAR_5, &VAR_3);
  if (VAR_4) {
   FUNC_5("Failed to wait for async response [rc=%d]\n",
    VAR_4);
   break;
  }
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 != 128) {
   FUNC_5("OPAL async call returned failed [rc=%d]\n",
    VAR_4);
   break;
  }
 case 128:
  break;
 default:
  FUNC_5("OPAL write op-panel call failed [rc=%d]\n", VAR_4);
 }

 FUNC_1(VAR_5);
 return VAR_4;
}

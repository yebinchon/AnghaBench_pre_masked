
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct opal_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct opal_msg*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct opal_msg) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(u32 VAR_2, bool VAR_3)
{
 struct opal_msg VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0();
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_5(VAR_2, VAR_5, VAR_3);
 if (VAR_6 == VAR_1) {
  VAR_6 = FUNC_2(VAR_5, &VAR_4);
  if (VAR_6) {
   FUNC_6("Failed to wait for the async response\n");
   VAR_6 = -VAR_0;
   goto out;
  }
  VAR_6 = FUNC_3(FUNC_4(VAR_4));
 } else {
  VAR_6 = FUNC_3(VAR_6);
 }

out:
 FUNC_1(VAR_5);
 return VAR_6;
}

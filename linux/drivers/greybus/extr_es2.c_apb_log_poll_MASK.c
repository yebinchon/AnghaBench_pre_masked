
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es2_ap_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct es2_ap_dev*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct es2_ap_dev *VAR_4 = VAR_3;
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 while (!FUNC_3()) {
  FUNC_4(1000);
  FUNC_0(VAR_4, VAR_5);
 }

 FUNC_1(VAR_5);

 return 0;
}

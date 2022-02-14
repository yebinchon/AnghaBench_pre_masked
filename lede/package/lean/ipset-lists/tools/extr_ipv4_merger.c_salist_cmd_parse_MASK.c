
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa_open_data {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sa_open_data*,int ,int,int ) ;
 int FUNC_2 (struct sa_open_data*,int ,int ,int ) ;
 int FUNC_3 (struct sa_open_data*,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int*) ;
 int VAR_1 ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(struct sa_open_data *VAR_2, char *VAR_3, gfp_t VAR_4)
{
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 char *VAR_7;
 char VAR_8;
 int VAR_9 = 32;




 if ((VAR_7 = FUNC_7(VAR_3, '/'))) { }
 else if ((VAR_7 = FUNC_7(VAR_3, '-'))) { }
 else if ((VAR_7 = FUNC_7(VAR_3, ':'))) { }

 if (VAR_7) {

  VAR_8 = *VAR_7;
  *VAR_7 = '\0';

  VAR_5 = VAR_3;
  VAR_6 = VAR_7 + 1;

  if (*VAR_6 == '\0') {
   FUNC_0(VAR_1, "Nothing after '%c'.\n", VAR_8);
   return -VAR_0;
  }
 } else {

  VAR_8 = '\0';
  VAR_5 = VAR_3;
 }

 switch (VAR_8) {
 case '/':


  if (FUNC_5(VAR_6)) {
   FUNC_2(VAR_2, FUNC_4(VAR_5), FUNC_4(VAR_6), VAR_4);
  } else {
   FUNC_6(VAR_6, "%d", &VAR_9);
   FUNC_1(VAR_2, FUNC_4(VAR_5), VAR_9, VAR_4);
  }

  break;
 case ':':
 case '-':


  FUNC_3(VAR_2, FUNC_4(VAR_5), FUNC_4(VAR_6), VAR_4);

  break;
 default:
  if (FUNC_5(VAR_5)) {

   u32 VAR_10 = FUNC_4(VAR_5);

   FUNC_3(VAR_2, VAR_10, VAR_10, VAR_4);

  } else {
   FUNC_0(VAR_1, "Invalid IP address '%s'.\n", VAR_5);
   return -VAR_0;
  }
  break;
 }
 return 0;
}

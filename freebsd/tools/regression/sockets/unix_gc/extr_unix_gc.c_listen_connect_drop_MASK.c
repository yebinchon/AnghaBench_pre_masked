
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int*,int*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 char* VAR_2 ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct sockaddr_in VAR_3;
 int VAR_4, VAR_5, VAR_6[2];
 int VAR_7, VAR_8;
 socklen_t VAR_9;

 VAR_2 = "listen_connect_drop";
 FUNC_8("%s\n", VAR_2);
 FUNC_9(&VAR_7, &VAR_8);

 VAR_4 = FUNC_6(VAR_0, VAR_1, 0);
 FUNC_2(VAR_4, (struct sockaddr *)&VAR_3, sizeof(VAR_3));
 FUNC_5(VAR_4, -1);

 FUNC_7(VAR_6);

 VAR_9 = sizeof(VAR_3);
 FUNC_4(VAR_4, (struct sockaddr *)&VAR_3, &VAR_9);

 VAR_5 = FUNC_6(VAR_0, VAR_1, 0);
 FUNC_11(VAR_5);
 FUNC_3(VAR_5, (struct sockaddr *)&VAR_3, VAR_9);

 FUNC_12(1);
 FUNC_10(VAR_6[0], VAR_4);
 FUNC_1(VAR_4, VAR_6[0], VAR_6[1]);
 FUNC_12(1);
 FUNC_0(VAR_5);

 FUNC_13(VAR_7, VAR_8);
}

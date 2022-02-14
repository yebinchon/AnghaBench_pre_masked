
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sun ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sockaddr_un*,int) ;
 int FUNC_1 (int,int,int) ;
 char* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int*,int*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ,int,char*,char*,char*) ;
 char* VAR_7 ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static void
FUNC_13(void)
{
 struct sockaddr_un VAR_8;
 struct sockaddr_in VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13[2];

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.sun_family = VAR_1;
 VAR_8.sun_len = sizeof(VAR_8);




 VAR_7 = "listen_drop_unp1";
 FUNC_8("%s\n", VAR_7);
 FUNC_11(VAR_8.sun_path, sizeof(VAR_8.sun_path), "%s/%s", VAR_6, VAR_7);
 FUNC_9(&VAR_10, &VAR_11);
 VAR_12 = FUNC_6(VAR_4, VAR_5, 0);
 FUNC_4(VAR_12, (struct sockaddr *)&VAR_8, sizeof(VAR_8));
 FUNC_5(VAR_12, -1);
 FUNC_7(VAR_13);
 FUNC_10(VAR_13[0], VAR_12);
 FUNC_1(VAR_12, VAR_13[0], VAR_13[1]);
 FUNC_12(VAR_10, VAR_11);




 VAR_7 = "listen_drop_unp2";
 FUNC_8("%s\n", VAR_7);
 FUNC_11(VAR_8.sun_path, sizeof(VAR_8.sun_path), "%s/%s", VAR_6, VAR_7);
 FUNC_9(&VAR_10, &VAR_11);
 VAR_12 = FUNC_6(VAR_4, VAR_5, 0);
 FUNC_4(VAR_12, (struct sockaddr *)&VAR_8, sizeof(VAR_8));
 FUNC_5(VAR_12, -1);
 FUNC_7(VAR_13);
 FUNC_10(VAR_13[0], VAR_12);
 FUNC_1(VAR_13[0], VAR_13[1], VAR_12);
 FUNC_12(VAR_10, VAR_11);

 VAR_9.sin_family = VAR_0;
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_addr.s_addr = FUNC_2(VAR_2);
 VAR_9.sin_port = FUNC_3(0);




 VAR_7 = "listen_drop_inet1";
 FUNC_8("%s\n", VAR_7);
 FUNC_0(&VAR_8, sizeof(VAR_8));
 FUNC_9(&VAR_10, &VAR_11);
 VAR_12 = FUNC_6(VAR_3, VAR_5, 0);
 FUNC_4(VAR_12, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
 FUNC_5(VAR_12, -1);
 FUNC_7(VAR_13);
 FUNC_10(VAR_13[0], VAR_12);
 FUNC_1(VAR_12, VAR_13[0], VAR_13[1]);
 FUNC_12(VAR_10, VAR_11);




 VAR_7 = "listen_drop_inet2";
 FUNC_8("%s\n", VAR_7);
 FUNC_0(&VAR_8, sizeof(VAR_8));
 FUNC_9(&VAR_10, &VAR_11);
 VAR_12 = FUNC_6(VAR_3, VAR_5, 0);
 FUNC_4(VAR_12, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
 FUNC_5(VAR_12, -1);
 FUNC_7(VAR_13);
 FUNC_10(VAR_13[0], VAR_12);
 FUNC_1(VAR_13[0], VAR_13[1], VAR_12);
 FUNC_12(VAR_10, VAR_11);
}

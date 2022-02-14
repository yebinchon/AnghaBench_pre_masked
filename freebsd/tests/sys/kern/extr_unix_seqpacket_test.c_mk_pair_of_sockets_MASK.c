
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (struct sockaddr_un*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,struct sockaddr*,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,char const*,int) ;

__attribute__((used)) static const char*
FUNC_12(int *VAR_3)
{
 struct sockaddr_un VAR_4;

 const char *VAR_5 = "sock";
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_10(VAR_1, VAR_2, 0);
 FUNC_1(VAR_6 >= 0);

 FUNC_5(&VAR_4, sizeof(VAR_4));
 VAR_4.sun_family = VAR_0;
 VAR_4.sun_len = sizeof(VAR_4);
 FUNC_11(VAR_4.sun_path, VAR_5, sizeof(VAR_4.sun_path));
 VAR_7 = FUNC_4(VAR_6, (struct sockaddr *)&VAR_4, sizeof(VAR_4));
 VAR_7 = FUNC_8(VAR_6, -1);
 FUNC_0(0, VAR_7);


 VAR_8 = FUNC_10(VAR_1, VAR_2, 0);
 FUNC_1(VAR_8 >= 0);
 VAR_7 = FUNC_7(VAR_8, (struct sockaddr*)&VAR_4, sizeof(VAR_4));
 if (VAR_7 != 0) {
  FUNC_9("connect");
  FUNC_3("connect(2) failed");
 }


 VAR_9 = FUNC_2(VAR_6, ((void*)0), ((void*)0));
 if (VAR_9 == -1) {
  FUNC_9("accept");
  FUNC_3("accept(2) failed");
 }

 VAR_3[0] = VAR_9;
 VAR_3[1] = VAR_8;

 FUNC_6(VAR_6);

 return (VAR_5);
}

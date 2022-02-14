
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_family; int sun_path; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5(int VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8;
 struct sockaddr_un VAR_9;

 if (VAR_5 < 2)
  return VAR_0;

 VAR_8 = FUNC_3(VAR_2, VAR_4, 0);
 if (VAR_8 == -1) {
  FUNC_2("socket");
  return VAR_0;
 }

 (void)FUNC_4(VAR_9.sun_path, VAR_6[1], sizeof(VAR_9.sun_path));
 VAR_9.sun_family = VAR_3;

 VAR_7 = FUNC_0(VAR_8, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
 if (VAR_7 == -1) {
  FUNC_2("connect");
  return VAR_0;
 }

 FUNC_1(VAR_8);

 return VAR_1;
}

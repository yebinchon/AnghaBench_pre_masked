
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_rmhook {int ourhook; } ;
typedef int rmh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int ,struct ngm_rmhook*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_6, char **VAR_7)
{
 struct ngm_rmhook VAR_8;
 const char *VAR_9 = ".";


 switch (VAR_6) {
 case 3:
  VAR_9 = VAR_7[1];
  VAR_6--;
  VAR_7++;

 case 2:
  FUNC_1(VAR_8.ourhook, sizeof(VAR_8.ourhook), "%s", VAR_7[1]);
  break;
 default:
  return (VAR_2);
 }


 if (FUNC_0(VAR_5, VAR_9, VAR_3,
     VAR_4, &VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_2("send msg");
  return (VAR_0);
 }
 return (VAR_1);
}

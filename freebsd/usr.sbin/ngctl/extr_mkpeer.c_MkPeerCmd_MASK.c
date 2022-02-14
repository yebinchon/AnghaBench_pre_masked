
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_mkpeer {int peerhook; int ourhook; int type; } ;
typedef int mkp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int ,struct ngm_mkpeer*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_6, char **VAR_7)
{
 struct ngm_mkpeer VAR_8;
 const char *VAR_9 = ".";


 switch (VAR_6) {
 case 5:
  VAR_9 = VAR_7[1];
  VAR_6--;
  VAR_7++;

 case 4:
  FUNC_1(VAR_8.type, sizeof(VAR_8.type), "%s", VAR_7[1]);
  FUNC_1(VAR_8.ourhook, sizeof(VAR_8.ourhook), "%s", VAR_7[2]);
  FUNC_1(VAR_8.peerhook, sizeof(VAR_8.peerhook), "%s", VAR_7[3]);
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

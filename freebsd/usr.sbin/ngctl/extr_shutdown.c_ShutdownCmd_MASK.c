
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_6, char **VAR_7)
{
 char *VAR_8;


 switch (VAR_6) {
 case 2:
  VAR_8 = VAR_7[1];
  break;
 default:
  return (VAR_2);
 }


 if (FUNC_0(VAR_5, VAR_8, VAR_3,
     VAR_4, ((void*)0), 0) < 0) {
  FUNC_1("shutdown");
  return (VAR_0);
 }
 return (VAR_1);
}

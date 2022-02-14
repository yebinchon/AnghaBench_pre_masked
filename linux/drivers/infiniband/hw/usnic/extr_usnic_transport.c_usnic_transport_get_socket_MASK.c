
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 struct socket* FUNC_0 (int ) ;
 struct socket* FUNC_1 (int,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,struct socket*) ;

struct socket *FUNC_5(int VAR_1)
{
 struct socket *VAR_2;
 int VAR_3;
 char VAR_4[25];


 VAR_2 = FUNC_1(VAR_1, &VAR_3);
 if (!VAR_2) {
  FUNC_3("Unable to lookup socket for fd %d with err %d\n",
    VAR_1, VAR_3);
  return FUNC_0(-VAR_0);
 }

 FUNC_4(VAR_4, sizeof(VAR_4), VAR_2);
 FUNC_2("Get sock %s\n", VAR_4);

 return VAR_2;
}

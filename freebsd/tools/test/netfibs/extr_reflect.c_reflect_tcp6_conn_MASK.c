
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,char*,int,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_1)
{
 char VAR_2[1500];
 ssize_t VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_1, ((void*)0), ((void*)0));
 if (VAR_5 == -1)
  FUNC_2(VAR_0, "accept()");

 VAR_3 = FUNC_3(VAR_5, VAR_2, sizeof(VAR_2));
 VAR_4 = FUNC_4(VAR_5, VAR_2, sizeof(VAR_2), VAR_3, ((void*)0), 0);
 FUNC_1(VAR_5);

 return (VAR_4);
}

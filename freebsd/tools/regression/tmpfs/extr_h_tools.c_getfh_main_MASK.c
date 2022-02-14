
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fhandle_t ;
typedef int fh ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int) ;

int
FUNC_4(int VAR_2, char **VAR_3)
{
 int VAR_4;
 fhandle_t VAR_5;

 if (VAR_2 < 2)
  return VAR_0;

 VAR_4 = FUNC_1(VAR_3[1], &VAR_5);
 if (VAR_4 == 0)
  FUNC_0(VAR_0, "can not getfh");

 VAR_4 = FUNC_3(VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_4 == -1) {
  FUNC_2("write");
  return VAR_0;
 }

 return 0;
}

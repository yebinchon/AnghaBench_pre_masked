
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2(int VAR_1,char *VAR_2)
{
  ssize_t VAR_3;
  VAR_3 = FUNC_1(VAR_1,VAR_2,2*VAR_0);
  if (VAR_3 == -1)
    {
      FUNC_0("write failed");
      return 1;
    }
  return 0;
}

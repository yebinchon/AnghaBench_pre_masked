
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[32];
 if (VAR_0 & 1)
  FUNC_0(VAR_1, sizeof(VAR_1), "%u.5", VAR_0/2);
 else
  FUNC_0(VAR_1, sizeof(VAR_1), "%u", VAR_0/2);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static
int FUNC_3(int VAR_5, int VAR_6, char *VAR_7[])
{
 if (VAR_6 != 1)
  return VAR_4;

 if (FUNC_2(VAR_7[0], "enable") == 0) {
  FUNC_0(VAR_5, VAR_0 |
          VAR_1);
  FUNC_1(VAR_5, VAR_2);
 } else if (FUNC_2(VAR_7[0], "disble") == 0)
  FUNC_0(VAR_5, VAR_0);
 else
  return VAR_4;

 return VAR_3;
}

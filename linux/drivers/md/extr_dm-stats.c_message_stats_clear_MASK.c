
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mapped_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*,int*,char*) ;

__attribute__((used)) static int FUNC_3(struct mapped_device *VAR_1,
          unsigned VAR_2, char **VAR_3)
{
 int VAR_4;
 char VAR_5;

 if (VAR_2 != 2)
  return -VAR_0;

 if (FUNC_2(VAR_3[1], "%d%c", &VAR_4, &VAR_5) != 1 || VAR_4 < 0)
  return -VAR_0;

 return FUNC_1(FUNC_0(VAR_1), VAR_4);
}

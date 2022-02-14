
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_stat {int ust_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,struct uml_stat*) ;

int FUNC_7(char *VAR_7)
{
 struct uml_stat VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_7, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_2(VAR_8.ust_mode))
  return VAR_2;
 else if (FUNC_4(VAR_8.ust_mode))
  return VAR_6;
 else if (FUNC_1(VAR_8.ust_mode))
  return VAR_1;
 else if (FUNC_0(VAR_8.ust_mode))
  return VAR_0;
 else if (FUNC_3(VAR_8.ust_mode))
  return VAR_3;
 else if (FUNC_5(VAR_8.ust_mode))
  return VAR_5;
 else return VAR_4;
}

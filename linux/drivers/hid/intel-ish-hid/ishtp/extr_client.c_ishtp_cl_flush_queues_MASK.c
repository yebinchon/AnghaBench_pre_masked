
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ishtp_cl*) ;

int FUNC_2(struct ishtp_cl *VAR_1)
{
 if (FUNC_0(!VAR_1 || !VAR_1->dev))
  return -VAR_0;

 FUNC_1(VAR_1);

 return 0;
}

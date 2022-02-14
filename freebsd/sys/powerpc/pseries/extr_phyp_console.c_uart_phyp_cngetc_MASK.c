
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,int *) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2(struct consdev *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_3, 1);
 if (VAR_4 != 1)
  return (-1);




 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; int member_1; int member_0; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static int32_t
FUNC_1(int32_t VAR_0)
{
 static struct timeval VAR_1 = { 0, 0 };
 struct timeval VAR_2;

 FUNC_0(&VAR_2, ((void*)0));

 if (VAR_2.tv_sec - VAR_1.tv_sec >= VAR_0) {
  VAR_1 = VAR_2;
  return (1);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int VAR_1 ;

int FUNC_1 (void)
{
 struct timeval VAR_2;

 FUNC_0(&VAR_2, ((void*)0));

 if (!VAR_1)
 {
  VAR_1 = VAR_2.tv_sec;
  return VAR_2.tv_usec/1000;
 }

 VAR_0 = (VAR_2.tv_sec - VAR_1)*1000 + VAR_2.tv_usec/1000;

 return VAR_0;
}

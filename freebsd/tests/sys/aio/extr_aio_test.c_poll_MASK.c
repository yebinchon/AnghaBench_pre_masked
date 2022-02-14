
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiocb {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct aiocb*) ;
 int FUNC_1 (struct aiocb*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct aiocb *VAR_1)
{
 int VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) == VAR_0)
  FUNC_2(25000);
 if (VAR_2)
  return (VAR_2);
 else
  return (FUNC_1(VAR_1));
}

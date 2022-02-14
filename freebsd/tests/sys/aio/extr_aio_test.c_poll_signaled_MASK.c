
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiocb {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;

 int VAR_0 ;
 int FUNC_1 (struct aiocb*) ;
 int FUNC_2 (struct aiocb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct aiocb *VAR_3)
{
 int VAR_4;

 FUNC_0(0, FUNC_3(&VAR_1));
 VAR_4 = FUNC_1(VAR_3);
 switch (VAR_4) {
  case 128:
   VAR_2 = VAR_0;
   return (-1);
  case 0:
   return (FUNC_2(VAR_3));
  default:
   return (VAR_4);
 }
}

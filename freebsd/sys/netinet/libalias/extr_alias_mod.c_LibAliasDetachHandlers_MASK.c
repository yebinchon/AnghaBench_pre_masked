
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_handler {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct proto_handler*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(struct proto_handler *VAR_3)
{

 while (VAR_3->dir != VAR_0) {
  FUNC_0(&VAR_1, VAR_3, VAR_2);
  VAR_3++;
 }

 return (0);
}

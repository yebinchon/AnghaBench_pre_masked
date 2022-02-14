
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_handler {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct proto_handler*) ;

int
FUNC_1(struct proto_handler *VAR_1)
{
 int VAR_2;

 while (VAR_1->dir != VAR_0) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   return (VAR_2);
  VAR_1++;
 }

 return (0);
}

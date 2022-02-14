
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_handler {int dummy; } ;
struct dll {int handle; } ;


 int FUNC_0 (struct proto_handler*) ;
 int FUNC_1 (int ) ;
 struct proto_handler* FUNC_2 () ;
 int FUNC_3 (struct dll*) ;
 struct dll* FUNC_4 () ;

int
FUNC_5(void)
{
 struct dll *VAR_0;
 struct proto_handler *VAR_1;


 while ((VAR_1 = FUNC_2()) != ((void*)0)) {
  FUNC_0(VAR_1);
 }
 while ((VAR_0 = FUNC_4()) != ((void*)0)) {
  FUNC_1(VAR_0->handle);
  FUNC_3(VAR_0);
 }
 return (1);
}

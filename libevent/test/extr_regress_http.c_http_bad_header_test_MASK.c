
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;


 int FUNC_0 (struct evkeyvalq*) ;
 int FUNC_1 (struct evkeyvalq*,char*,char*) ;
 int FUNC_2 (struct evkeyvalq*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct evkeyvalq VAR_1;

 FUNC_0(&VAR_1);

 FUNC_3(FUNC_1(&VAR_1, "One", "Two") == 0);
 FUNC_3(FUNC_1(&VAR_1, "One", "Two\r\n Three") == 0);
 FUNC_3(FUNC_1(&VAR_1, "One\r", "Two") == -1);
 FUNC_3(FUNC_1(&VAR_1, "One\n", "Two") == -1);
 FUNC_3(FUNC_1(&VAR_1, "One", "Two\r") == -1);
 FUNC_3(FUNC_1(&VAR_1, "One", "Two\n") == -1);

 FUNC_2(&VAR_1);
}

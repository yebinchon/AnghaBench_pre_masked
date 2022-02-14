
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int fd; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ctx*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, void *VAR_1)
{
 struct ctx *VAR_2 = VAR_1;

 FUNC_0(VAR_2->fd, "AT+CREG?\r\n");
 FUNC_1(VAR_2, 10);
}

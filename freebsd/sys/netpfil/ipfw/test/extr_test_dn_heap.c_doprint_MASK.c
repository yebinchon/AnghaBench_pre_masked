
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x {char* buf; } ;


 int FUNC_0 (char*,char*) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct x *VAR_2 = VAR_0;
 FUNC_0("found element <%s>\n", VAR_2->buf);
 return (int)VAR_1;
}

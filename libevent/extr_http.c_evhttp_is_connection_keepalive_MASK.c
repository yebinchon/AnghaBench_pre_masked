
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;


 char* FUNC_0 (struct evkeyvalq*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct evkeyvalq* VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0, "Connection");
 return (VAR_1 != ((void*)0)
     && FUNC_1(VAR_1, "keep-alive", 10) == 0);
}

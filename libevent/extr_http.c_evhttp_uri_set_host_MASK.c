
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_uri {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(struct evhttp_uri *VAR_0, const char *VAR_1)
{
 if (VAR_1) {
  if (VAR_1[0] == '[') {
   if (! FUNC_1(VAR_1, VAR_1+FUNC_3(VAR_1)))
    return -1;
  } else {
   if (! FUNC_2(VAR_1, VAR_1+FUNC_3(VAR_1)))
    return -1;
  }
 }

 FUNC_0(VAR_1);
 return 0;
}

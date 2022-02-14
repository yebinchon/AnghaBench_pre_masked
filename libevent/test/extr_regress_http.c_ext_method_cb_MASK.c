
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_ext_method {char* method; scalar_t__ type; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct evhttp_ext_method *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return -1;
 if (VAR_1->method) {
  if (FUNC_0(VAR_1->method, "CUSTOM") == 0) {
   VAR_1->type = VAR_0;
   VAR_1->flags = 0;
   return 0;
  }
 } else {
  if (VAR_1->type == VAR_0) {
   VAR_1->method = "CUSTOM";
   return 0;
  }
 }
 return -1;
}

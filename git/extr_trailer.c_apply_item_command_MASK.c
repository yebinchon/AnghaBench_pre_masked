
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trailer_item {char* value; } ;
struct TYPE_2__ {scalar_t__ command; } ;
struct arg_item {char* value; TYPE_1__ conf; } ;


 char* FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct trailer_item *VAR_0, struct arg_item *VAR_1)
{
 if (VAR_1->conf.command) {
  const char *VAR_2;
  if (VAR_1->value && VAR_1->value[0]) {
   VAR_2 = VAR_1->value;
  } else {
   if (VAR_0 && VAR_0->value)
    VAR_2 = FUNC_2(VAR_0->value);
   else
    VAR_2 = FUNC_2("");
  }
  VAR_1->value = FUNC_0(VAR_1->conf.command, VAR_2);
  FUNC_1((char *)VAR_2);
 }
}

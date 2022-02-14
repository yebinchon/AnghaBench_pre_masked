
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct attr_check {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* value; int attr; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,char const*,char const*,...) ;
 int FUNC_5 (char const*,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct attr_check *VAR_2, const char *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_2->nr;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  const char *VAR_6 = VAR_2->items[VAR_4].value;

  if (FUNC_1(VAR_6))
   VAR_6 = "set";
  else if (FUNC_0(VAR_6))
   VAR_6 = "unset";
  else if (FUNC_2(VAR_6))
   VAR_6 = "unspecified";

  if (VAR_0) {
   FUNC_4("%s%c"
          "%s%c"
          "%s%c" ,
          VAR_3, 0,
          FUNC_3(VAR_2->items[VAR_4].attr), 0, VAR_6, 0);
  } else {
   FUNC_5(VAR_3, ((void*)0), VAR_1, 0);
   FUNC_4(": %s: %s\n",
          FUNC_3(VAR_2->items[VAR_4].attr), VAR_6);
  }
 }
}

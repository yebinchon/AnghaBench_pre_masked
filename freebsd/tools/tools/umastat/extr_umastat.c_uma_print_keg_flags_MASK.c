
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uma_keg {int uk_flags; } ;
struct TYPE_2__ {int fi_flag; char* fi_name; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct uma_keg *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_2->uk_flags) {
  FUNC_0("%suk_flags = 0;\n", VAR_3);
  return;
 }

 FUNC_0("%suk_flags = ", VAR_3);
 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->uk_flags & VAR_0[VAR_5].fi_flag) {
   if (VAR_4++ > 0)
    FUNC_0(" | ");
   FUNC_0("%s", VAR_0[VAR_5].fi_name);
  }

 }
 FUNC_0(";\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
typedef enum dot3Vendors { ____Placeholder_dot3Vendors } dot3Vendors ;
struct TYPE_2__ {char* name; int len; char** chips; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(u_int32_t VAR_1)
{
 enum dot3Vendors VAR_2 = FUNC_1(VAR_1);
 u_int VAR_3 = FUNC_0(VAR_1);

 FUNC_2("\tChipset: ");
 if (VAR_2 < 1
     || VAR_2 >= (sizeof VAR_0)/(sizeof VAR_0[0])
     || !VAR_0[VAR_2].name) {
  FUNC_2("unknown\n");
  return;
 }

 FUNC_2("%s ", VAR_0[VAR_2].name);
 if (VAR_3 < 1 || VAR_3 >= VAR_0[VAR_2].len) {
  FUNC_2("unknown\n");
  return;
 }

 FUNC_2("%s\n", VAR_0[VAR_2].chips[VAR_3]);
}

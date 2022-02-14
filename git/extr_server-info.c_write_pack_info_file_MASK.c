
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_info_ctx {int dummy; } ;
struct TYPE_2__ {int p; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct update_info_ctx*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct update_info_ctx *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_1(VAR_2, "P %s\n", FUNC_0(VAR_0[VAR_3]->p)) < 0)
   return -1;
 }
 if (FUNC_1(VAR_2, "\n") < 0)
  return -1;
 return 0;
}

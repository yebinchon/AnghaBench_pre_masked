
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct debug_view {int dummy; } ;
struct TYPE_3__ {scalar_t__ level; } ;
typedef TYPE_1__ debug_info_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(debug_info_t *VAR_1, struct debug_view *VAR_2,
     char *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->level == VAR_0)
  VAR_4 = FUNC_0(VAR_3, "-\n");
 else
  VAR_4 = FUNC_0(VAR_3, "%i\n", VAR_1->level);
 return VAR_4;
}

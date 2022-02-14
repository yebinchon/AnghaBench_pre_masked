
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_6__ {scalar_t__ re_nsub; } ;
typedef TYPE_2__ regex_t ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, const char *VAR_1, regex_t *VAR_2, regmatch_t *VAR_3)
{
 if (VAR_0 > (int)VAR_2->re_nsub)
  FUNC_1("No subexpression %d", VAR_0);


 else if (VAR_3[VAR_0].rm_so != -1 &&
     VAR_3[VAR_0].rm_eo != -1) {
  FUNC_0(VAR_1 + VAR_3[VAR_0].rm_so,
   VAR_3[VAR_0].rm_eo - VAR_3[VAR_0].rm_so);
 }
}

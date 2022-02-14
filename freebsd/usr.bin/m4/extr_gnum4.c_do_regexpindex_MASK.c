
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_9__ {scalar_t__ re_nsub; } ;
typedef TYPE_2__ regex_t ;



 int FUNC_0 (int,TYPE_2__*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char const*,scalar_t__,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, regex_t *VAR_1, const char *VAR_2,
    regmatch_t *VAR_3)
{
 int VAR_4;

 switch(VAR_4 = FUNC_3(VAR_1, VAR_0, VAR_1->re_nsub+1, VAR_3, 0)) {
 case 0:
  FUNC_2(VAR_3[0].rm_so);
  break;
 case 128:
  FUNC_1(-1);
  break;
 default:
  FUNC_0(VAR_4, VAR_1, VAR_2);
 }
}

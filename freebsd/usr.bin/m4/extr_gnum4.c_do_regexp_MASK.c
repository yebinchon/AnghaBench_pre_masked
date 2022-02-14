
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int regmatch_t ;
struct TYPE_6__ {scalar_t__ re_nsub; } ;
typedef TYPE_1__ regex_t ;



 int FUNC_0 (char const*,TYPE_1__*,char const*,int *) ;
 int FUNC_1 (int,TYPE_1__*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char const*,scalar_t__,int *,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, regex_t *VAR_1, const char *VAR_2,
    const char *VAR_3, regmatch_t *VAR_4)
{
 int VAR_5;

 switch(VAR_5 = FUNC_4(VAR_1, VAR_0, VAR_1->re_nsub+1, VAR_4, 0)) {
 case 0:
  FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
  FUNC_3(FUNC_2());
  break;
 case 128:
  break;
 default:
  FUNC_1(VAR_5, VAR_1, VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct epat {int dummy; } ;
struct TYPE_4__ {int mode; int pat; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, int VAR_4)
{


 if (VAR_2 == VAR_1) {
  VAR_1 *= 2;
  VAR_0 = FUNC_0(VAR_0, ++VAR_1 *
      sizeof(struct epat));
 }
 VAR_0[VAR_2].pat = FUNC_1(VAR_3);
 VAR_0[VAR_2].mode = VAR_4;
 ++VAR_2;
}

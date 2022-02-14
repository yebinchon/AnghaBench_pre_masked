
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sbcset; int mbcset; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ duplicated; TYPE_1__ opr; } ;
typedef TYPE_2__ re_token_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (re_token_t *VAR_2)
{





    if (VAR_2->type == VAR_1 && VAR_2->duplicated == 0)
      FUNC_1 (VAR_2->opr.sbcset);
}

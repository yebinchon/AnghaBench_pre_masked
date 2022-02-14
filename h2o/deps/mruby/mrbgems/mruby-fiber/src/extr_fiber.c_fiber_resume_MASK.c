
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_9__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
typedef int mrb_int ;
typedef int mrb_bool ;
struct TYPE_8__ {TYPE_1__* ci; } ;
struct TYPE_7__ {scalar_t__ acc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*,int **,int *) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value *VAR_4;
  mrb_int VAR_5;
  mrb_bool VAR_6 = VAR_0;

  FUNC_1(VAR_2, "*!", &VAR_4, &VAR_5);
  if (VAR_2->c->ci->acc < 0) {
    VAR_6 = VAR_1;
  }
  return FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4, VAR_1, VAR_6);
}

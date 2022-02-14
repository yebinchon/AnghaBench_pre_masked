
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int mrb_state ;
struct TYPE_3__ {int ilen; int iseq; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ptrdiff_t
FUNC_3(mrb_state *VAR_0, mrb_irep *VAR_1, uint8_t *VAR_2, uint8_t VAR_3)
{
  uint8_t *VAR_4 = VAR_2;

  VAR_4 += FUNC_1(VAR_1->ilen, VAR_4);
  VAR_4 += FUNC_2(VAR_4);
  FUNC_0(VAR_4, VAR_1->iseq, VAR_1->ilen * sizeof(mrb_code));
  VAR_4 += VAR_1->ilen * sizeof(mrb_code);

  return VAR_4 - VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ name; } ;
typedef TYPE_1__ qkey ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_2 ;

qkey *FUNC_3 (void) {
  VAR_0++;
  if (VAR_2 == ((void*)0)) {
    VAR_1 -= FUNC_0();
    qkey *VAR_3 = FUNC_1 (sizeof (qkey));
    VAR_1 += FUNC_0();

    return VAR_3;
  }
  qkey *VAR_4 = VAR_2;
  VAR_2 = (qkey *)VAR_2->name;
  FUNC_2 (VAR_4, 0, sizeof (qkey));

  return VAR_4;
}

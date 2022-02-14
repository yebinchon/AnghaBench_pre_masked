
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* l; } ;
typedef TYPE_1__ wkey ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_2 ;

wkey *FUNC_2 (void) {
  VAR_0++;

  wkey *VAR_3;
  if (VAR_2 != ((void*)0)) {
    VAR_3 = VAR_2;
    VAR_2 = VAR_2->l;
  } else {
    VAR_1 += sizeof (wkey);
    VAR_3 = FUNC_0 (sizeof (wkey));
  }
  FUNC_1 (VAR_3, 0, sizeof (wkey));
  return VAR_3;
}

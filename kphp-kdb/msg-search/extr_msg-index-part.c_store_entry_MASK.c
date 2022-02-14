
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; } ;
typedef TYPE_1__ entry_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int) ;

entry_t *FUNC_3 (entry_t *VAR_1) {
  int VAR_2 = sizeof(entry_t) - VAR_0 + VAR_1->len + 1;
  entry_t *VAR_3 = FUNC_2 (VAR_2);
  FUNC_0 (VAR_3);
  FUNC_1 (VAR_3, VAR_1, VAR_2);
  return VAR_3;
}

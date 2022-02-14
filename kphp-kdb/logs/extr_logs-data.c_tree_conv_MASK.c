
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int val_type ;
struct TYPE_7__ {int dtype; int type; } ;
struct TYPE_8__ {int vn; int is_const; TYPE_1__ tok; struct TYPE_8__** v; } ;
typedef TYPE_2__ node ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__** FUNC_1 (int) ;
 TYPE_2__* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

node *FUNC_3 (node *VAR_3, val_type VAR_4) {
  node *VAR_5 = FUNC_2();
  VAR_5->v = FUNC_1 (sizeof (node *));
  VAR_5->vn = 1;
  VAR_5->v[0] = VAR_3;

  if (FUNC_0 (VAR_4)) {
    VAR_5->tok.type = VAR_1;
    VAR_5->tok.dtype = VAR_2;
  } else {
    VAR_5->tok.type = VAR_0;
    VAR_5->tok.dtype = VAR_4;
  }

  VAR_5->is_const = VAR_3->is_const;

  return VAR_5;
}

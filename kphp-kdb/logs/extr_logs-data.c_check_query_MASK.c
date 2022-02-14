
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* root; } ;
typedef TYPE_2__ expression ;
typedef int event ;
struct TYPE_5__ {int v_int; } ;
struct TYPE_7__ {TYPE_1__ tok; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;

inline int FUNC_1 (expression *VAR_0, event *VAR_1) {
  if (FUNC_0 (VAR_0->root, VAR_1)) {
    return VAR_0->root->tok.v_int;
  }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type; int max_res; TYPE_2__* right; TYPE_1__* left; scalar_t__ complexity; } ;
typedef TYPE_3__ query_t ;
struct TYPE_6__ {int max_res; scalar_t__ complexity; } ;
struct TYPE_5__ {int max_res; scalar_t__ complexity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;



__attribute__((used)) static inline void FUNC_6 (query_t *VAR_2) {
  int VAR_3 = VAR_2->left->max_res, VAR_4 = VAR_2->right->max_res, VAR_5;
  switch (VAR_2->type) {
  case 129:
    if (FUNC_2(VAR_3) && FUNC_2(VAR_4)) {
      VAR_5 = FUNC_5 (VAR_3, VAR_4);
    } else if (FUNC_2(VAR_3)) {
      VAR_5 = VAR_3;
    } else if (FUNC_2(VAR_4)) {
      VAR_5 = VAR_4;
    } else if (FUNC_1(VAR_3) || FUNC_1(VAR_4)) {
      VAR_5 = VAR_0;
    } else {
      VAR_5 = VAR_3 + VAR_4 + 1;
      if (VAR_5 < ~VAR_1) {
 VAR_5 = ~VAR_1;
      }
    }
    break;
  case 128:
    if (FUNC_0(VAR_3) && FUNC_0(VAR_4)) {
      VAR_5 = FUNC_4 (VAR_3, VAR_4);
    } else if (FUNC_0(VAR_3)) {
      VAR_5 = VAR_3;
    } else if (FUNC_0(VAR_4)) {
      VAR_5 = VAR_4;
    } else if (FUNC_1(VAR_3) || FUNC_1(VAR_4)) {
      VAR_5 = VAR_0;
    } else {
      VAR_5 = VAR_3 + VAR_4;
      if (VAR_5 > VAR_1) {
 VAR_5 = VAR_1;
      }
    }
    break;
  default:
    FUNC_3 (0);
  }
  VAR_2->max_res = VAR_5;
  VAR_2->complexity = VAR_2->left->complexity + VAR_2->right->complexity;
}

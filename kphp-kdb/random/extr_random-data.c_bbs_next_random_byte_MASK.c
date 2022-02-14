
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i; int * x; int ctx; int r; } ;
typedef TYPE_1__ bbs_t ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int *,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int) ;

int FUNC_6 (bbs_t *VAR_0) {
  BIGNUM *VAR_1 = FUNC_4 ();
  FUNC_3 (VAR_1, VAR_0->x, VAR_0->x, VAR_0->r, VAR_0->ctx);
  FUNC_2 (VAR_0->x, 8);
  int VAR_2 = FUNC_1 (VAR_0->x);
  FUNC_5 (VAR_2 >= 0 && VAR_2 < 256);
  FUNC_0 (VAR_0->x);
  VAR_0->x = VAR_1;
  ++(VAR_0->i);
  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int sums; int used; int code; int mul1; int mul0; } ;
typedef TYPE_1__ perfect_hash ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*,int ,int ) ;

int FUNC_5 (perfect_hash *VAR_0, unsigned char *VAR_1) {
  unsigned char *VAR_2 = VAR_1;

  FUNC_0(VAR_1, VAR_0->d);
  FUNC_0(VAR_1, VAR_0->mul0);
  FUNC_0(VAR_1, VAR_0->mul1);

  FUNC_4 (VAR_1, VAR_0->code, FUNC_1 (VAR_0->d));
  VAR_1 += FUNC_1 (VAR_0->d);
  FUNC_4 (VAR_1, VAR_0->used, FUNC_3 (VAR_0->d));
  VAR_1 += FUNC_3 (VAR_0->d);
  FUNC_4 (VAR_1, VAR_0->sums, FUNC_2 (VAR_0->d));
  VAR_1 += FUNC_2 (VAR_0->d);

  return VAR_1 - VAR_2;
}

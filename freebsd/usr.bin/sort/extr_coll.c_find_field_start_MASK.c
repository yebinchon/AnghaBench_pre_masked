
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_specs {int pos1b; int c1; int f1; } ;
struct bwstring {int dummy; } ;


 size_t FUNC_0 (struct bwstring const*,int ,size_t,int ,int*) ;
 size_t FUNC_1 (struct bwstring const*,int ,int*) ;

__attribute__((used)) static void
FUNC_2(const struct bwstring *VAR_0, struct key_specs *VAR_1,
    size_t *VAR_2, size_t *VAR_3, bool *VAR_4, bool *VAR_5)
{

 *VAR_2 = FUNC_1(VAR_0, VAR_1->f1, VAR_4);
 if (!*VAR_4)
  *VAR_3 = FUNC_0(VAR_0, VAR_1->c1, *VAR_2,
      VAR_1->pos1b, VAR_5);
 else
  *VAR_5 = 1;
}

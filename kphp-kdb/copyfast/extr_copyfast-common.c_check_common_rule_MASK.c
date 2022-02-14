
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netrule {int type; unsigned int mask2; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct netrule*,unsigned int) ;

int FUNC_2 (struct netrule *VAR_0, unsigned VAR_1, unsigned VAR_2) {
  FUNC_0 (VAR_0->type);
  if (VAR_0->type == 1) {
    return FUNC_1 (VAR_0, VAR_1) && FUNC_1 (VAR_0, VAR_2);
  } else {
    return 2 * (FUNC_1 (VAR_0, VAR_1) && FUNC_1 (VAR_0, VAR_2) && ((VAR_1 & ~(VAR_0->mask2)) == (VAR_2 & ~(VAR_0->mask2))));
  }
}

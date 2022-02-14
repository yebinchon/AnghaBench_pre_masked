
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netrule {unsigned int mask1; unsigned int ip; int type; } ;


 int FUNC_0 (int ) ;

int FUNC_1 (struct netrule *VAR_0, unsigned VAR_1) {
  FUNC_0 (VAR_0->type);
  return (VAR_1 & ~(VAR_0->mask1)) == VAR_0->ip;
}

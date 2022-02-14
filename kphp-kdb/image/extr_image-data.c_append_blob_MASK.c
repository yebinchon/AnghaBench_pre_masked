
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_output {int l; scalar_t__ s; } ;


 int FUNC_0 (scalar_t__,void*,size_t) ;

__attribute__((used)) static int FUNC_1 (struct forth_output *VAR_0, void *VAR_1, size_t VAR_2) {
  if (VAR_0 == ((void*)0)) { return -1; }
  int VAR_3 = (sizeof (VAR_0->s) - VAR_0->l);
  if (VAR_3 < VAR_2) {
    return -1;
  }
  FUNC_0 (VAR_0->s + VAR_0->l, VAR_1, VAR_2);
  VAR_0->l += VAR_2;
  return 0;
}

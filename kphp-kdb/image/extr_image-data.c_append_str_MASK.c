
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_output {int l; scalar_t__ s; } ;


 int FUNC_0 (scalar_t__,int,char*,char*) ;

__attribute__((used)) static void FUNC_1 (struct forth_output *VAR_0, char *VAR_1) {
  if (VAR_0 == ((void*)0)) { return; }
  int VAR_2 = (sizeof (VAR_0->s) - VAR_0->l) - 2;
  if (VAR_2 <= 0) { return; }
  int VAR_3 = FUNC_0 (VAR_0->s + VAR_0->l, VAR_2, "%s\n", VAR_1);
  if (VAR_3 < 0 || VAR_3 >= VAR_2) { return; }
  VAR_0->l += VAR_3;
}

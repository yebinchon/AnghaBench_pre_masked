
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {unsigned int a; unsigned int b; unsigned int c; unsigned int d; unsigned int e; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct lev_generic* FUNC_0 (int) ;

void FUNC_1 (unsigned VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned char VAR_6) {
  struct lev_generic *VAR_7 = FUNC_0 (24);
  VAR_7->type = VAR_0 + VAR_6;
  VAR_7->a = VAR_1;
  VAR_7->b = VAR_2;
  VAR_7->c = VAR_3;
  VAR_7->d = VAR_4;
  VAR_7->e = VAR_5;
}

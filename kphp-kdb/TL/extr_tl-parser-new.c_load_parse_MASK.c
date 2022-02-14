
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {size_t pos; size_t len; int * text; } ;


 int VAR_0 ;
 struct parse VAR_1 ;

void FUNC_0 (struct parse VAR_2) {
  VAR_1 = VAR_2;
  VAR_0 = VAR_1.pos > VAR_1.len ? 0: VAR_1.text[VAR_1.pos] ;
}

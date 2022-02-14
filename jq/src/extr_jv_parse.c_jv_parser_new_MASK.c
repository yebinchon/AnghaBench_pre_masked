
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int flags; } ;


 struct jv_parser* FUNC_0 (int) ;
 int FUNC_1 (struct jv_parser*,int) ;

struct jv_parser* FUNC_2(int VAR_0) {
  struct jv_parser* VAR_1 = FUNC_0(sizeof(struct jv_parser));
  FUNC_1(VAR_1, VAR_0);
  VAR_1->flags = VAR_0;
  return VAR_1;
}

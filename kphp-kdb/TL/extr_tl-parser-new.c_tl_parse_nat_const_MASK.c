
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ type; int len; long long* text; int nc; } ;
struct tl_combinator_tree {long long type_flags; int type; int act; } ;


 struct tl_combinator_tree* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct tl_combinator_tree*) ;
 int VAR_2 ;
 struct tl_combinator_tree* FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,char*,int,int,long long*) ;

struct tl_combinator_tree *FUNC_5 (struct tree *VAR_5, int VAR_6) {
  FUNC_3 (VAR_5->type == VAR_3);
  FUNC_3 (!VAR_5->nc);
  FUNC_4 (2, "tl_parse_nat_const: s = %d, val = %.*s\n", VAR_6, VAR_5->len, VAR_5->text);
  if (VAR_6 > 0) {
    FUNC_0 ("Nat const can not preceed with %%\n");
    VAR_1;
  }
  FUNC_3 (VAR_5->type == VAR_3);
  FUNC_3 (!VAR_5->nc);
  FUNC_1 (VAR_0);
  VAR_0 = FUNC_2 ();
  VAR_0->act = VAR_2;
  VAR_0->type = VAR_4;
  int VAR_7;
  long long VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5->len; VAR_7++) {
    VAR_8 = VAR_8 * 10 + VAR_5->text[VAR_7] - '0';
  }
  VAR_0->type_flags = VAR_8;
  return VAR_0;
}

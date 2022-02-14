
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys_array {int dummy; } ;
struct key_value {struct bwstring* k; } ;
struct bwstring {int dummy; } ;


 int FUNC_0 (struct bwstring*) ;
 struct key_value* FUNC_1 (struct keys_array*,size_t) ;
 size_t VAR_0 ;

void
FUNC_2(struct keys_array *VAR_1, struct bwstring *VAR_2, size_t VAR_3)
{

 if (VAR_1 && VAR_0 > VAR_3) {
  struct key_value *VAR_4;

  VAR_4 = FUNC_1(VAR_1, VAR_3);

  if (VAR_4->k && VAR_4->k != VAR_2)
   FUNC_0(VAR_4->k);
  VAR_4->k = VAR_2;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys_array {int dummy; } ;
struct key_value {struct bwstring const* k; } ;
struct bwstring {int dummy; } ;


 int FUNC_0 (struct bwstring const*) ;
 struct key_value* FUNC_1 (struct keys_array*,size_t) ;
 int FUNC_2 () ;
 size_t VAR_0 ;
 int FUNC_3 (struct keys_array*,int ,int ) ;

void
FUNC_4(const struct bwstring *VAR_1, struct keys_array *VAR_2)
{

 if (VAR_2) {
  for (size_t VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
   const struct key_value *VAR_4;

   VAR_4 = FUNC_1(VAR_2, VAR_3);
   if (VAR_4->k && VAR_4->k != VAR_1)
    FUNC_0(VAR_4->k);
  }
  FUNC_3(VAR_2, 0, FUNC_2());
 }
}

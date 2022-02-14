
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int ka; } ;
struct key_value {struct bwstring* k; } ;
struct bwstring {int dummy; } ;


 size_t FUNC_0 (struct bwstring const*) ;
 scalar_t__ FUNC_1 (struct bwstring const*,size_t) ;
 struct key_value* FUNC_2 (int *,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct sort_list_item *VAR_0, size_t VAR_1)
{
 const struct key_value *VAR_2;
 const struct bwstring *VAR_3;

 VAR_2 = FUNC_2(&VAR_0->ka, 0);
 VAR_3 = VAR_2->k;

 if ((FUNC_0(VAR_3) > VAR_1))
  return (unsigned char) FUNC_1(VAR_3,VAR_1);
 return (-1);
}

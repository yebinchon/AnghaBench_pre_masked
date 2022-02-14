
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct all_attrs_item {scalar_t__ value; scalar_t__ macro; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct all_attrs_item*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct all_attrs_item *VAR_1, int VAR_2, int VAR_3)
{
 const struct all_attrs_item *VAR_4 = &VAR_1[VAR_2];

 if (VAR_4->macro && VAR_4->value == VAR_0)
  return FUNC_0("expand", VAR_1, VAR_4->macro, VAR_3);
 else
  return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_format {int dummy; } ;
struct ref_array_item {int kind; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref_array_item*) ;
 struct ref_array_item* FUNC_1 (char const*,struct object_id const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct ref_array_item*,struct ref_format const*) ;

void FUNC_4(const char *VAR_0, const struct object_id *VAR_1,
        const struct ref_format *VAR_2)
{
 struct ref_array_item *VAR_3;
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_3->kind = FUNC_2(VAR_0);
 FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_ids {struct asymmetric_key_id const** id; } ;
struct asymmetric_key_id {int dummy; } ;


 int FUNC_0 (struct asymmetric_key_id const**) ;

__attribute__((used)) static bool FUNC_1(
 const struct asymmetric_key_ids *VAR_0,
 const struct asymmetric_key_id *VAR_1,
 bool (*VAR_2)(const struct asymmetric_key_id *VAR_3,
        const struct asymmetric_key_id *VAR_4))
{
 int VAR_5;

 if (!VAR_0 || !VAR_1)
  return 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0->id); VAR_5++)
  if (VAR_2(VAR_0->id[VAR_5], VAR_1))
   return 1;
 return 0;
}

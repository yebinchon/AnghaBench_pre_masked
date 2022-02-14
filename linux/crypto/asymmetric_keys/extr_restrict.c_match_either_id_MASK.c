
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_ids {int * id; } ;
struct asymmetric_key_id {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct asymmetric_key_id const*) ;

__attribute__((used)) static bool FUNC_1(const struct asymmetric_key_ids *VAR_0,
       const struct asymmetric_key_id *VAR_1)
{
 return (FUNC_0(VAR_0->id[0], VAR_1) ||
  FUNC_0(VAR_0->id[1], VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_id {scalar_t__ len; int data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

bool FUNC_1(const struct asymmetric_key_id *VAR_0,
       const struct asymmetric_key_id *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return 0;
 if (VAR_0->len != VAR_1->len)
  return 0;
 return FUNC_0(VAR_0->data, VAR_1->data, VAR_0->len) == 0;
}

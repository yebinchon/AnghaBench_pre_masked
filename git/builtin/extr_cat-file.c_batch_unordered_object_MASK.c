
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object_cb_data {int seen; } ;


 int FUNC_0 (struct object_id const*,struct object_cb_data*) ;
 scalar_t__ FUNC_1 (int ,struct object_id const*) ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_0, void *VAR_1)
{
 struct object_cb_data *VAR_2 = VAR_1;

 if (FUNC_1(VAR_2->seen, VAR_0))
  return 0;

 return FUNC_0(VAR_0, VAR_2);
}

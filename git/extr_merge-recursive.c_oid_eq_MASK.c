
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (struct object_id const*,struct object_id const*) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_0, const struct object_id *VAR_1)
{
 if (!VAR_0 && !VAR_1)
  return 2;
 return VAR_0 && VAR_1 && FUNC_0(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (int *,struct object_id const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_2,
         timestamp_t VAR_3)
{
 if (!VAR_1)
  return 0;
 if (VAR_3 > VAR_1)
  return 0;
 if (FUNC_0(&VAR_0, VAR_2) >= 0)
  return 0;
 return 1;
}

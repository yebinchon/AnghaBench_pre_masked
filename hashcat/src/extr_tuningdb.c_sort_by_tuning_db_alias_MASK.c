
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_name; } ;
typedef TYPE_1__ tuning_db_alias_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const tuning_db_alias_t *VAR_2 = (const tuning_db_alias_t *) VAR_0;
  const tuning_db_alias_t *VAR_3 = (const tuning_db_alias_t *) VAR_1;

  const int VAR_4 = FUNC_0 (VAR_2->device_name, VAR_3->device_name);

  if (VAR_4 != 0) return (VAR_4);

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_ddb_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct skl_ddb_entry const*,struct skl_ddb_entry const*) ;

bool FUNC_1(const struct skl_ddb_entry *VAR_0,
     const struct skl_ddb_entry *VAR_1,
     int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_4 != VAR_3 &&
      FUNC_0(VAR_0, &VAR_1[VAR_4]))
   return 1;
 }

 return 0;
}

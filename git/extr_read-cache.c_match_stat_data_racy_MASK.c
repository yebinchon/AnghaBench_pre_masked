
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_data {int dummy; } ;
struct stat {int dummy; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct index_state const*,struct stat_data const*) ;
 int FUNC_1 (struct stat_data const*,struct stat*) ;

int FUNC_2(const struct index_state *VAR_1,
    const struct stat_data *VAR_2, struct stat *VAR_3)
{
 if (FUNC_0(VAR_1, VAR_2))
  return VAR_0;
 return FUNC_1(VAR_2, VAR_3);
}

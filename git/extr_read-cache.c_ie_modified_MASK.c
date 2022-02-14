
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ sd_size; } ;
struct cache_entry {TYPE_1__ ce_stat_data; int ce_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct index_state*,struct cache_entry const*,struct stat*) ;
 int FUNC_2 (struct index_state*,struct cache_entry const*,struct stat*,unsigned int) ;

int FUNC_3(struct index_state *VAR_3,
  const struct cache_entry *VAR_4,
  struct stat *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  return 0;




 if (VAR_7 & (VAR_1 | VAR_2))
  return VAR_7;
 if ((VAR_7 & VAR_0) &&
     (FUNC_0(VAR_4->ce_mode) || VAR_4->ce_stat_data.sd_size != 0))
  return VAR_7;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_7 | VAR_8;
 return 0;
}

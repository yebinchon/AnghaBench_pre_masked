
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ sd_size; } ;
struct cache_entry {TYPE_1__ ce_stat_data; int name; } ;


 scalar_t__ FUNC_0 (struct cache_entry*,struct stat*) ;
 scalar_t__ FUNC_1 (struct index_state*,struct cache_entry*,struct stat*) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_3(struct index_state *VAR_0,
      struct cache_entry *VAR_1)
{
 struct stat VAR_2;

 if (FUNC_2(VAR_1->name, &VAR_2) < 0)
  return;
 if (FUNC_0(VAR_1, &VAR_2))
  return;
 if (FUNC_1(VAR_0, VAR_1, &VAR_2)) {
  VAR_1->ce_stat_data.sd_size = 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_flags; int ce_stat_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (int *,struct stat*) ;
 int FUNC_3 (struct index_state*,struct cache_entry*) ;

void FUNC_4(struct index_state *VAR_2, struct cache_entry *VAR_3, struct stat *VAR_4)
{
 FUNC_2(&VAR_3->ce_stat_data, VAR_4);

 if (VAR_1)
  VAR_3->ce_flags |= VAR_0;

 if (FUNC_0(VAR_4->st_mode)) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_2, VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 unsigned int FUNC_1 (struct cache_entry const*,struct stat*) ;
 unsigned int FUNC_2 (struct index_state*,struct cache_entry const*,struct stat*) ;
 scalar_t__ FUNC_3 (struct cache_entry const*) ;
 scalar_t__ FUNC_4 (struct index_state*,struct cache_entry const*) ;
 int FUNC_5 (struct index_state*) ;

int FUNC_6(struct index_state *VAR_9,
    const struct cache_entry *VAR_10, struct stat *VAR_11,
    unsigned int VAR_12)
{
 unsigned int VAR_13;
 int VAR_14 = VAR_12 & VAR_3;
 int VAR_15 = VAR_12 & VAR_2;
 int VAR_16 = VAR_12 & VAR_4;
 int VAR_17 = VAR_12 & VAR_1;

 if (!VAR_17)
  FUNC_5(VAR_9);






 if (!VAR_15 && FUNC_3(VAR_10))
  return 0;
 if (!VAR_14 && (VAR_10->ce_flags & VAR_5))
  return 0;
 if (!VAR_17 && (VAR_10->ce_flags & VAR_0))
  return 0;






 if (FUNC_0(VAR_10))
  return VAR_6 | VAR_8 | VAR_7;

 VAR_13 = FUNC_1(VAR_10, VAR_11);
 if (!VAR_13 && FUNC_4(VAR_9, VAR_10)) {
  if (VAR_16)
   VAR_13 |= VAR_6;
  else
   VAR_13 |= FUNC_2(VAR_9, VAR_10, VAR_11);
 }

 return VAR_13;
}

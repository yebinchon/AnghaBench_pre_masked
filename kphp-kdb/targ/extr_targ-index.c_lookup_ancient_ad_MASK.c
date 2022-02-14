
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_index_ads_directory_entry {int ad_id; } ;


 struct targ_index_ads_directory_entry* VAR_0 ;
 int VAR_1 ;

struct targ_index_ads_directory_entry *FUNC_0 (int VAR_2) {
  int VAR_3 = -1, VAR_4 = VAR_1, VAR_5;
  while (VAR_4 - VAR_3 > 1) {
    VAR_5 = (VAR_3 + VAR_4) >> 1;
    if (VAR_0[VAR_5].ad_id <= VAR_2) {
      VAR_3 = VAR_5;
    } else {
      VAR_4 = VAR_5;
    }
  }
  if (VAR_3 >= 0 && VAR_0[VAR_3].ad_id == VAR_2) {
    return &VAR_0[VAR_3];
  } else {
    return 0;
  }
}

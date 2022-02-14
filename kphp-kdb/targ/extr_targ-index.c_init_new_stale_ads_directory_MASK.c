
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_index_ads_directory_entry {int ad_id; int ad_info_offset; } ;
struct advert {int flags; int ad_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct targ_index_ads_directory_entry* VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct advert* FUNC_2 (int) ;
 struct targ_index_ads_directory_entry* FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4 (void) {
  int VAR_6;
  VAR_4 = sizeof (struct targ_index_ads_directory_entry) * (VAR_5 + 1);
  struct targ_index_ads_directory_entry *VAR_7 = VAR_3 = FUNC_3 (VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    struct advert *VAR_8 = FUNC_2 (VAR_6);
    if (VAR_8 && (VAR_8->flags & (VAR_0 | VAR_1))) {
      FUNC_1 (VAR_7 - VAR_3 < VAR_5);
      VAR_7->ad_id = VAR_8->ad_id;
      VAR_7->ad_info_offset = -1;
      ++VAR_7;
    } else if (FUNC_0 (VAR_6)) {
      FUNC_1 (!VAR_8);
      VAR_7->ad_id = VAR_6;
      VAR_7->ad_info_offset = -1;
      ++VAR_7;
    }
  }
  FUNC_1 (VAR_7 - VAR_3 == VAR_5);
  VAR_7->ad_id = 0x7fffffff;
  VAR_7->ad_info_offset = -1;
}

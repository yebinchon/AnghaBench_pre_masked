
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_set_local_copy_yellow_light_short {int yellow_light_duration; int packed_location; scalar_t__ data; } ;
struct cache_uri {int dummy; } ;
struct cache_local_copy {int location; int packed_location; int flags; } ;
typedef int md5_t ;
typedef int L ;


 int VAR_0 ;
 int FUNC_0 (struct cache_uri*) ;
 struct cache_uri* FUNC_1 (int *,int) ;
 int FUNC_2 (struct cache_uri*,struct cache_local_copy*) ;
 int FUNC_3 (struct cache_uri*,int ,int ) ;
 int FUNC_4 (struct cache_local_copy*,int ,int) ;

__attribute__((used)) static int FUNC_5 (struct lev_cache_set_local_copy_yellow_light_short *VAR_1) {
  struct cache_uri *VAR_2 = FUNC_1 ((md5_t *) VAR_1->data, 8);
  FUNC_0 (VAR_2);
  struct cache_local_copy VAR_3;
  FUNC_4 (&VAR_3, 0, sizeof (VAR_3));
  VAR_3.flags |= VAR_0;
  VAR_3.packed_location = VAR_1->packed_location;
  FUNC_2 (VAR_2, &VAR_3);
  return FUNC_3 (VAR_2, VAR_3.location, VAR_1->yellow_light_duration);
}

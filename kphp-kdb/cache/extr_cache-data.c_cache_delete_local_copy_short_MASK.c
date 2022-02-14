
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_set_new_local_copy_short {int packed_location; scalar_t__ data; } ;
struct cache_uri {int dummy; } ;
struct cache_local_copy {int packed_location; int flags; } ;
typedef int md5_t ;
typedef int L ;


 int VAR_0 ;
 int FUNC_0 (struct cache_uri*) ;
 int FUNC_1 (struct cache_uri*,struct cache_local_copy*) ;
 struct cache_uri* FUNC_2 (int *,int) ;
 int FUNC_3 (struct cache_local_copy*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct lev_cache_set_new_local_copy_short *VAR_1) {
  struct cache_uri *VAR_2 = FUNC_2 ((md5_t *) VAR_1->data, 8);
  FUNC_0 (VAR_2);
  struct cache_local_copy VAR_3;
  FUNC_3 (&VAR_3, 0, sizeof (VAR_3));
  VAR_3.flags |= VAR_0;
  VAR_3.packed_location = VAR_1->packed_location;
  return FUNC_1 (VAR_2, &VAR_3);
}

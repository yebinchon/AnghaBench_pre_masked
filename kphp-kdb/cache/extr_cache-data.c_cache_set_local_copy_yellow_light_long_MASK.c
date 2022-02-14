
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_set_local_copy_yellow_light_long {int yellow_light_duration; int data; scalar_t__ md5; } ;
struct cache_uri {int dummy; } ;
struct cache_local_copy {scalar_t__* location; } ;
typedef int md5_t ;
typedef int L ;


 int FUNC_0 (int) ;
 struct cache_uri* FUNC_1 (int *,int) ;
 int FUNC_2 (struct cache_uri*,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (struct cache_local_copy*,int ,int) ;

__attribute__((used)) static int FUNC_5 (struct lev_cache_set_local_copy_yellow_light_long *VAR_0, int VAR_1) {
  struct cache_uri *VAR_2 = FUNC_1 ((md5_t *) VAR_0->md5, 16);
  FUNC_0 (VAR_2);
  struct cache_local_copy VAR_3;
  FUNC_4 (&VAR_3, 0, sizeof (VAR_3));
  FUNC_0 (VAR_1 < sizeof (VAR_3.location));
  FUNC_3 (VAR_3.location, VAR_0->data, VAR_1);
  VAR_3.location[VAR_1] = 0;

  return FUNC_2 (VAR_2, VAR_3.location, VAR_0->yellow_light_duration);
}

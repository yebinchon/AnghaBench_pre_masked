
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lev_cache_uri {int data; } ;
struct lev_cache_access_short {int data; } ;
struct lev_cache_access_long {int data; } ;
struct cache_uri {char const uri_md5_h0; } ;
struct TYPE_3__ {char const* c; } ;
struct TYPE_4__ {TYPE_1__ uri_md5; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_cache_access_long*,int) ;
 int FUNC_3 (struct lev_cache_access_short*,int) ;
 int FUNC_4 (struct cache_uri*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cache_uri*) ;
 int FUNC_7 (struct cache_uri*) ;
 struct cache_uri* FUNC_8 (char const* const,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (char const* const) ;
 long long VAR_6 ;

void FUNC_11 (const char *const VAR_7) {
  long long VAR_8 = VAR_6;
  struct cache_uri *VAR_9 = FUNC_8 (VAR_7, 1);

  FUNC_5 ((FUNC_6 (VAR_9) == 1) ? VAR_4 : VAR_3);

  if (VAR_6 != VAR_8) {
    int VAR_10 = FUNC_10 (VAR_7);
    FUNC_1 (VAR_10 < 256);
    struct lev_cache_uri *VAR_11 = FUNC_0 (VAR_2 + VAR_10, sizeof (struct lev_cache_uri) + VAR_10, 0);
    FUNC_9 (VAR_11->data, VAR_7, VAR_10);
  }
  const int VAR_12 = FUNC_4 (VAR_9);
  if (VAR_12 == 8) {
    struct lev_cache_access_short *VAR_13 = FUNC_0 (VAR_1 + 1, sizeof (struct lev_cache_access_short), 0);
    FUNC_9 (VAR_13->data, &VAR_9->uri_md5_h0, 8);
    FUNC_3 (VAR_13, 1);
  } else {
    FUNC_1 (VAR_12 == 16);
    struct lev_cache_access_long *VAR_14 = FUNC_0 (VAR_0 + 1, sizeof (struct lev_cache_access_long), 0);
    FUNC_7 (VAR_9);
    FUNC_9 (VAR_14->data, VAR_5, 16);
    FUNC_2 (VAR_14, 1);
  }
}

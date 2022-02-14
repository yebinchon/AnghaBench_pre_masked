
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lev_cache_set_size_short {int data; } ;
struct lev_cache_set_size_long {long long size; int data; } ;
struct cache_uri {long long size; int uri_md5_h0; } ;
struct TYPE_3__ {int * c; } ;
struct TYPE_4__ {TYPE_1__ uri_md5; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cache_uri*) ;
 struct cache_uri* FUNC_3 (struct cache_uri*,long long) ;
 int FUNC_4 (struct cache_uri*) ;
 struct cache_uri* FUNC_5 (char const* const,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int,char*,char const* const,long long) ;

int FUNC_8 (const char *const VAR_4, long long VAR_5) {
  if (VAR_5 < 0 || VAR_5 > VAR_0) {
    FUNC_7 (2, "cache_do_set_size (%s, %lld), size is out of range\n", VAR_4, VAR_5);
    return -1;
  }
  struct cache_uri *VAR_6 = FUNC_5 (VAR_4, 0);
  if (VAR_6 == ((void*)0)) {
    return -1;
  }
  if (VAR_6->size != VAR_5) {
    const int VAR_7 = FUNC_2 (VAR_6);
    FUNC_1 (VAR_7 != 0);
    if (VAR_7 == 8 && VAR_5 <= 0xffffffffLL) {
      struct lev_cache_set_size_short *VAR_8 = FUNC_0 (VAR_2, sizeof (struct lev_cache_set_size_short), (unsigned) VAR_5);
      FUNC_6 (VAR_8->data, &VAR_6->uri_md5_h0, 8);
    } else {
      struct lev_cache_set_size_long *VAR_9 = FUNC_0 (VAR_1, sizeof (struct lev_cache_set_size_long), 0);
      VAR_9->size = VAR_5;
      FUNC_4 (VAR_6);
      FUNC_6 (VAR_9->data, VAR_3, 16);
    }
    VAR_6 = FUNC_3 (VAR_6, VAR_5);
  }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int dummy; } ;
struct cache_local_copy {int dummy; } ;


 int VAR_0 ;
 struct cache_local_copy* VAR_1 ;
 int FUNC_0 (struct cache_uri*,struct cache_local_copy*,int ,int,int *) ;
 struct cache_uri* FUNC_1 (char const* const,int ) ;
 int FUNC_2 (int,char*,char const* const) ;

int FUNC_3 (const char *const VAR_2, struct cache_local_copy **VAR_3) {
  struct cache_uri *VAR_4 = FUNC_1 (VAR_2, 0);
  if (VAR_4 == ((void*)0)) {
    return -1;
  }
  int VAR_5 = FUNC_0 (VAR_4, VAR_1, VAR_0, 1, ((void*)0));
  if (VAR_5 < 0) {
    FUNC_2 (1, "cache_do_local_copies (uri: %s): cache_local_copy_unpack failed.\n", VAR_2);
    return -1;
  }
  *VAR_3 = VAR_1;
  return VAR_5;
}

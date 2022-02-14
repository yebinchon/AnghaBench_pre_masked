
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cache_uri {scalar_t__ uri_md5_h0; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__* h; } ;
typedef TYPE_1__ md5_t ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1 (const struct cache_uri *VAR_2, const md5_t *VAR_3, int VAR_4) {
  if (VAR_2->uri_md5_h0 == VAR_3->h[0]) {
    if (VAR_4 == 8) {
      return 1;
    }
    md5_t VAR_5;
    FUNC_0 (VAR_2->data + VAR_1, &VAR_5);
    VAR_0++;
    return (VAR_5.h[1] == VAR_3->h[1]);
  }
  return 0;
}

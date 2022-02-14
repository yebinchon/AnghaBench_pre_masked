
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache_uri {int uri_md5_h0; } ;
struct TYPE_4__ {int * h; } ;
struct TYPE_3__ {TYPE_2__ uri_md5; int computed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct cache_uri const*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3 (const struct cache_uri *VAR_1) {
  if (!VAR_0) {
    VAR_0[0] = VAR_1->uri_md5_h0;
  }
  int VAR_2 = FUNC_1 (&VAR_0, 8);
  if (VAR_2 == 1) {
    return 8;
  }
  if (!VAR_2) { return 0; }
  FUNC_0 (VAR_2 > 1);
  FUNC_2 (VAR_1);
  VAR_2 = FUNC_1 (&VAR_0, 16);
  FUNC_0 (VAR_2 == 1);
  return 16;
}

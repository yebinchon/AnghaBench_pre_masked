
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache_uri {scalar_t__ uri_md5_h0; scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__* h; } ;
struct TYPE_4__ {int computed; TYPE_1__ uri_md5; } ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2 (const struct cache_uri *VAR_3) {
  if (!VAR_0) {
    FUNC_1 (VAR_3->data + VAR_2, &VAR_0);
    VAR_1++;
    VAR_0 = 1;
    FUNC_0 (VAR_3->uri_md5_h0 == VAR_0[0]);
  }
}

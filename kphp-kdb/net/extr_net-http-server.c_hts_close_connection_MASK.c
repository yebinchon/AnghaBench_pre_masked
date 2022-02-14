
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int (* ht_close ) (struct connection*,int) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (struct connection*,int) ;
 int FUNC_2 (struct connection*,int) ;

int FUNC_3 (struct connection *VAR_1, int VAR_2) {
  VAR_0--;

  if (FUNC_0(VAR_1)->ht_close != ((void*)0)) {
    FUNC_0(VAR_1)->ht_close (VAR_1, VAR_2);
  }

  return FUNC_1 (VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int out; TYPE_1__* type; scalar_t__ crypto; } ;
struct TYPE_2__ {int (* crypto_needed_output_bytes ) (struct connection*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4 (struct connection *VAR_0) {
  if (VAR_0->crypto) {
    int VAR_1 = VAR_0->type->crypto_needed_output_bytes (VAR_0);
    FUNC_3 (2, "rpcs_flush: padding with %d bytes\n", VAR_1);
    if (VAR_1 > 0) {
      FUNC_0 (!(VAR_1 & 3));
      static int VAR_2[3] = {4, 4, 4};
      FUNC_0 (VAR_1 <= 12);
      FUNC_0 (FUNC_1 (&VAR_0->out, VAR_2, VAR_1) == VAR_1);
    }
    return VAR_1;
  }
  return 0;
}

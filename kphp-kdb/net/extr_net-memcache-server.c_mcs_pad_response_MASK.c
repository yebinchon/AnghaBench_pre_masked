
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {scalar_t__ status; int Out; TYPE_1__* type; } ;
struct TYPE_4__ {int crypto_flags; } ;
struct TYPE_3__ {int (* crypto_needed_output_bytes ) (struct connection*) ;} ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int *,char*,int) ;

void FUNC_4 (struct connection *VAR_1) {
  if (VAR_1->status == VAR_0 && (FUNC_0(VAR_1)->crypto_flags & 8)) {
    int VAR_2 = VAR_1->type->crypto_needed_output_bytes (VAR_1);
    if (VAR_2 > 0) {
      static char VAR_3[16] = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      FUNC_1 (VAR_2 <= 15);
      FUNC_3 (&VAR_1->Out, VAR_3, VAR_2);
    }
  }
}

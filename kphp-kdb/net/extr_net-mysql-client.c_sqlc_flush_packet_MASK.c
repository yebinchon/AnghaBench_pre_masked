
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int Out; TYPE_1__* type; scalar_t__ crypto; } ;
struct TYPE_4__ {int block_size; } ;
struct TYPE_3__ {int (* crypto_needed_output_bytes ) (struct connection*) ;} ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_4 (struct connection*) ;
 int VAR_1 ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6 (struct connection *VAR_2, int VAR_3) {
  int VAR_4 = 0;
  if (VAR_2->crypto) {
    VAR_4 = VAR_2->type->crypto_needed_output_bytes (VAR_2);
    if (VAR_3 >= 0) {
      int VAR_5 = FUNC_0(VAR_2)->block_size;
      VAR_3 += 4;
      VAR_3 = VAR_5 - VAR_3 % VAR_5;
      if (VAR_3 == VAR_5) {
        VAR_3 = 0;
      }
      FUNC_1 (VAR_3 == VAR_4);
    }
    if (VAR_1 > 1) {
      FUNC_2 (VAR_0, "sqlc_flush_query: padding with %d bytes\n", VAR_4);
    }
    if (VAR_4 > 0) {
      static char VAR_6[16];
      FUNC_1 (VAR_4 <= 15);
      FUNC_3 (VAR_6, VAR_4, VAR_4);
      FUNC_5 (&VAR_2->Out, VAR_6, VAR_4);
    }
  }
  return VAR_4;
}

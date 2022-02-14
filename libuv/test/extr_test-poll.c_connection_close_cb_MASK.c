
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_handle_t ;
struct TYPE_6__ {scalar_t__ open_handles; scalar_t__ read; scalar_t__ sent; scalar_t__ is_server_connection; } ;
typedef TYPE_2__ connection_context_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(uv_handle_t* VAR_4) {
  connection_context_t* VAR_5 = (connection_context_t*) VAR_4->data;

  if (--VAR_5->open_handles == 0) {
    if (VAR_3 == VAR_0 || VAR_5->is_server_connection) {
      FUNC_0(VAR_5->read == VAR_1);
    } else {
      FUNC_0(VAR_5->read == 0);
    }

    if (VAR_3 == VAR_0 || !VAR_5->is_server_connection) {
      FUNC_0(VAR_5->sent == VAR_1);
    } else {
      FUNC_0(VAR_5->sent == 0);
    }

    VAR_2++;

    FUNC_1(VAR_5);
  }
}

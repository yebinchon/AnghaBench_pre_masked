
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ body_len; scalar_t__ headers_len; int exit_code; int body; int headers; int return_code; } ;
typedef TYPE_1__ script_result ;
struct TYPE_9__ {scalar_t__ mode; TYPE_3__* conn; } ;
typedef TYPE_2__ php_worker ;
struct TYPE_10__ {int Out; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,int ,size_t) ;
 int FUNC_4 (TYPE_3__*,int ,int ,scalar_t__,int ,char*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;

void FUNC_6 (php_worker *VAR_5, script_result *VAR_6) {
  if (VAR_5->conn != ((void*)0)) {
    if (VAR_5->mode == VAR_0) {
      if (VAR_6 == ((void*)0)) {
        FUNC_1 (VAR_5->conn, "OK", 2);
      } else {
        if (0) {
          FUNC_4 (
              VAR_5->conn,
              VAR_6->return_code,
              0,
              VAR_6->body_len,
              VAR_6->headers,
              "text/html; charset=windows-1251"
              );
        } else {
          FUNC_5 (&VAR_5->conn->Out, VAR_6->headers, VAR_6->headers_len);
        }
        FUNC_5 (&VAR_5->conn->Out, VAR_6->body, VAR_6->body_len);
      }
    } else if (VAR_5->mode == VAR_3) {
      if (!VAR_2) {
        FUNC_2 (VAR_5, -505, "Nothing stored");
      }
    } else if (VAR_5->mode == VAR_1) {
      FUNC_0 (FUNC_3 (1, VAR_6->body, (size_t)VAR_6->body_len) == VAR_6->body_len);
      VAR_4 = VAR_6->exit_code;
    }
  }
}

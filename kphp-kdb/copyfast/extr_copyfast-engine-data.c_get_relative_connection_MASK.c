
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ generation; struct connection* conn; } ;
struct TYPE_4__ {int targ; } ;
struct TYPE_6__ {TYPE_2__ conn; TYPE_1__ targ; } ;
struct relative {int type; TYPE_3__ conn; } ;
struct connection {scalar_t__ generation; } ;


 int FUNC_0 (int ) ;
 struct connection* FUNC_1 (int ) ;

struct connection *FUNC_2 (struct relative *VAR_0) {
  if (!VAR_0) {
    return 0;
  }
  struct connection *VAR_1;
  if (VAR_0->type == 0) {
    VAR_1 = FUNC_1 (VAR_0->conn.targ.targ);
  } else if (VAR_0->type == 1) {
    VAR_1 = VAR_0->conn.conn.conn;
    if (VAR_1 && VAR_1->generation != VAR_0->conn.conn.generation) {
      VAR_1 = 0;
    }
  } else {
    FUNC_0 (0);
  }
  return VAR_1;
}

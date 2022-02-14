
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gather_data {TYPE_1__* c; } ;
struct connection {scalar_t__ master_generation; int fd; TYPE_1__* master; struct gather_data* gather; scalar_t__ unread_res_bytes; } ;
struct TYPE_2__ {scalar_t__ generation; int fd; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

struct gather_data *FUNC_1 (struct connection *VAR_2) {
  if (VAR_2->unread_res_bytes && VAR_2->gather && VAR_2->master && VAR_2->gather->c == VAR_2->master && VAR_2->master->generation == VAR_2->master_generation) {
    return VAR_2->gather;
  }
  if (VAR_1 > 0 && VAR_2->unread_res_bytes && VAR_2->gather) {
    FUNC_0 (VAR_0, "connection %d: orphaned by master connection %d\n", VAR_2->fd, VAR_2->master ? VAR_2->master->fd : -1);
  }
  VAR_2->gather = 0;
  VAR_2->master = 0;
  VAR_2->master_generation = 0;
  return 0;
}

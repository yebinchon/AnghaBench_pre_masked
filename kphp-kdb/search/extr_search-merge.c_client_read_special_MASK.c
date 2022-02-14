
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gather_entry {int res_read; int res_bytes; int num; } ;
struct connection {int fd; int unread_res_bytes; scalar_t__ master_generation; TYPE_3__* gather; TYPE_1__* master; int In; TYPE_2__* serv; } ;
struct TYPE_8__ {int in_queue; } ;
struct TYPE_7__ {int tot_num; int error_num; int wait_num; int ready_num; struct gather_entry* List; int Alloc; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int fd; TYPE_4__* ev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct gather_entry*,char**) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,char*,int,int,...) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10 (struct connection *VAR_3) {
  int VAR_4 = VAR_3->serv->id, VAR_5 = 0, VAR_6, VAR_7;
  char *VAR_8, *VAR_9, *VAR_10;
  struct gather_entry *VAR_11;

  if (VAR_2 > 0) {
    FUNC_4 (VAR_1, "in client_read_special for %d, %d unread bytes\n", VAR_3->fd, VAR_3->unread_res_bytes);
  }

  FUNC_1 (VAR_4 >= 0 && VAR_4 < VAR_0);
  while (VAR_3->unread_res_bytes && (VAR_6 = FUNC_7 (&VAR_3->In)) > 0) {

    if (VAR_6 > VAR_3->unread_res_bytes) {
      VAR_6 = VAR_3->unread_res_bytes;
    }

    VAR_10 = VAR_8 = FUNC_6 (&VAR_3->In);
    if (VAR_3->gather && VAR_3->gather->tot_num > VAR_4) {
      VAR_11 = &VAR_3->gather->List[VAR_4];

      if (VAR_2 > 1) {
        FUNC_4 (VAR_1, "inside client_read_special for %d, %d unread bytes, %d bytes read, %d bytes total, %d bytes ready\n", VAR_3->fd, VAR_3->unread_res_bytes, VAR_11->res_read, VAR_11->res_bytes, VAR_6);
      }

      if (!VAR_11->res_read) {
        if (VAR_6 < 4) {
          VAR_6 = FUNC_3 (&VAR_3->In, 16);
          if (VAR_6 >= 4) {
            continue;
          }
          return 0;
        }
        VAR_11->num = *((int *) VAR_10);
        VAR_11->res_read = 4;
        if (VAR_11->num >= 0 && VAR_11->num <= 0x1000000) {
          VAR_10 += 4;
          VAR_6 -= 4;
          if (VAR_2 > 1) {
            FUNC_4 (VAR_1, "got %d from %d\n", VAR_11->num, VAR_3->serv->id);
          }
        } else {
          VAR_11->num = -2;
          VAR_11->res_bytes += 4;
          VAR_3->gather->error_num++;
        }
      }

      while (VAR_6 > 0 && (VAR_7 = FUNC_2 (VAR_3->gather->Alloc, VAR_11, &VAR_9)) > 0) {
        if (VAR_2 > 1) {
          FUNC_4 (VAR_1, "inside client_read_special for %d read loop: %d ready to read, %d in target chunk buffer at %p\n", VAR_3->fd, VAR_6, VAR_7, VAR_9);
        }
        if (VAR_7 > VAR_6) { VAR_7 = VAR_6; }
          FUNC_8 (VAR_9, VAR_10, VAR_7);
        VAR_10 += VAR_7;
        VAR_6 -= VAR_7;
        VAR_11->res_read += VAR_7;
      }

      VAR_6 = VAR_10 - VAR_8;
    }

    if (VAR_2 > 1) {
      FUNC_4 (VAR_1, "inside client_read_special for %d: advance read pointer by %d bytes\n", VAR_3->fd, VAR_6);
    }
    FUNC_0 (&VAR_3->In, VAR_6);

    VAR_5 += VAR_6;
    VAR_3->unread_res_bytes -= VAR_6;
    FUNC_5 (&VAR_3->In);
  }

  if (!VAR_3->unread_res_bytes && VAR_3->gather && VAR_3->gather->tot_num >= VAR_4) {

    if (VAR_2 > 0) {
      FUNC_4 (VAR_1, "socket %d completes reading data for master %d\n", VAR_3->fd, VAR_3->master->fd);
    }
    VAR_11 = &VAR_3->gather->List[VAR_4];
    if (VAR_11->res_read != VAR_11->res_bytes) {
      FUNC_4 (VAR_1, "res_read=%d res_bytes=%d unread=%d num=%d\n", VAR_11->res_read, VAR_11->res_bytes, VAR_3->unread_res_bytes, VAR_11->num);
      FUNC_4 (VAR_1, "in connection %d gathering for master %d.%d, tot=%d err=%d ready=%d\n", VAR_3->fd, VAR_3->master->fd, VAR_4, VAR_3->gather->wait_num, VAR_3->gather->error_num, VAR_3->gather->ready_num);
    }
    FUNC_1 (VAR_11->res_read == VAR_11->res_bytes);
    FUNC_1 (++VAR_3->gather->ready_num <= VAR_3->gather->wait_num);
    if (VAR_3->gather->ready_num == VAR_3->gather->wait_num) {

      if (VAR_2 > 0) {
  FUNC_4 (VAR_1, "socket %d was the last one, waking master %d\n", VAR_3->fd, VAR_3->master->fd);
      }
      if (!VAR_3->master->ev->in_queue) {
  FUNC_9 (VAR_3->master->ev);
      }
    }
    VAR_3->master = 0;
    VAR_3->gather = 0;
    VAR_3->master_generation = 0;

  }

  return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_7__ {int readfile_thread_lock; int * readfile_thread_handle; int * eof_timer; } ;
struct TYPE_8__ {TYPE_2__ conn; } ;
struct TYPE_6__ {TYPE_4__* data; } ;
struct TYPE_9__ {int flags; TYPE_3__ pipe; TYPE_1__ read_req; } ;
typedef TYPE_4__ uv_pipe_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(uv_pipe_t* VAR_2) {
  FUNC_2((uv_stream_t*) VAR_2);
  VAR_2->read_req.data = VAR_2;
  VAR_2->pipe.conn.eof_timer = ((void*)0);
  FUNC_1(!(VAR_2->flags & VAR_1));
  if (VAR_2->flags & VAR_0) {
    VAR_2->pipe.conn.readfile_thread_handle = ((void*)0);
    FUNC_0(&VAR_2->pipe.conn.readfile_thread_lock);
  }
}

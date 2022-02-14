
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_10__ {int fd; int * stream; } ;
struct TYPE_11__ {int flags; TYPE_1__ data; } ;
typedef TYPE_2__ uv_stdio_container_t ;
typedef int uv_process_t ;
struct TYPE_12__ {char* file; char** args; int stdio_count; TYPE_2__* stdio; int exit_cb; } ;
typedef TYPE_3__ uv_process_options_t ;
struct TYPE_13__ {int ipc; } ;
typedef TYPE_4__ uv_pipe_t ;
typedef int options ;
typedef int exepath ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,size_t*) ;
 int FUNC_5 (int ,TYPE_4__*,int) ;
 int FUNC_6 (int ,int *,TYPE_3__*) ;

void FUNC_7(uv_pipe_t* VAR_5,
                  uv_process_t* VAR_6,
                  const char* VAR_7) {
  uv_process_options_t VAR_8;
  size_t VAR_9;
  char VAR_10[1024];
  char* VAR_11[3];
  int VAR_12;
  uv_stdio_container_t VAR_13[3];

  VAR_12 = FUNC_5(FUNC_3(), VAR_5, 1);
  FUNC_1(VAR_12 == 0);
  FUNC_1(VAR_5->ipc);

  VAR_9 = sizeof(VAR_10);
  VAR_12 = FUNC_4(VAR_10, &VAR_9);
  FUNC_1(VAR_12 == 0);

  VAR_10[VAR_9] = '\0';
  VAR_11[0] = VAR_10;
  VAR_11[1] = (char*)VAR_7;
  VAR_11[2] = ((void*)0);

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.file = VAR_10;
  VAR_8.args = VAR_11;
  VAR_8.exit_cb = VAR_4;
  VAR_8.stdio = VAR_13;
  VAR_8.stdio_count = FUNC_0(VAR_13);

  VAR_13[0].flags = VAR_0 | VAR_2 | VAR_3;
  VAR_13[0].data.stream = (uv_stream_t*) VAR_5;
  VAR_13[1].flags = VAR_1;
  VAR_13[1].data.fd = 1;
  VAR_13[2].flags = VAR_1;
  VAR_13[2].data.fd = 2;

  VAR_12 = FUNC_6(FUNC_3(), VAR_6, &VAR_8);
  FUNC_1(VAR_12 == 0);
}

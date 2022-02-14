
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_5__ {int * stream; } ;
struct TYPE_6__ {int flags; TYPE_1__ data; } ;
typedef TYPE_2__ uv_stdio_container_t ;
struct TYPE_7__ {char** args; int stdio_count; TYPE_2__* stdio; int exit_cb; void* file; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(void) {
  uv_stdio_container_t VAR_15[2];
  int VAR_16;

  FUNC_0(VAR_14 == 0);
  FUNC_0(VAR_12 == 0);

  VAR_3[0] = VAR_4;
  VAR_3[1] = "spawn_helper";
  VAR_3[2] = ((void*)0);
  VAR_9.file = VAR_4;
  VAR_9.args = VAR_3;
  VAR_9.exit_cb = VAR_5;

  FUNC_1(VAR_6, &VAR_10, 0);

  VAR_9.stdio = VAR_15;
  VAR_9.stdio_count = 2;
  VAR_9.stdio[0].flags = VAR_1;
  VAR_9.stdio[1].flags = VAR_0 | VAR_2;
  VAR_9.stdio[1].data.stream = (uv_stream_t*)&VAR_10;

  VAR_16 = FUNC_3(VAR_6, &VAR_13, &VAR_9);
  FUNC_0(VAR_16 == 0);

  VAR_14 = 1;
  VAR_12 = 1;
  VAR_11 = 0;

  VAR_16 = FUNC_2((uv_stream_t*) &VAR_10, VAR_7, VAR_8);
  FUNC_0(VAR_16 == 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* base; unsigned int len; } ;
typedef TYPE_2__ uv_buf_t ;
struct TYPE_7__ {int stream; } ;
struct TYPE_9__ {scalar_t__ wrstate; TYPE_1__ handle; int write_req; } ;
typedef TYPE_3__ conn ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_4(conn *VAR_4, const void *VAR_5, unsigned int VAR_6) {
  uv_buf_t VAR_7;

  FUNC_0(VAR_4->wrstate == VAR_2 || VAR_4->wrstate == VAR_1);
  VAR_4->wrstate = VAR_0;




  VAR_7.base = (char *) VAR_5;
  VAR_7.len = VAR_6;

  FUNC_1(0 == FUNC_3(&VAR_4->write_req,
                      &VAR_4->handle.stream,
                      &VAR_7,
                      1,
                      VAR_3));
  FUNC_2(VAR_4);
}

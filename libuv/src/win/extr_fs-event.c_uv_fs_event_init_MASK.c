
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {TYPE_3__ req; int * dirw; int * short_filew; int * filew; scalar_t__ req_pending; int * buffer; int dir_handle; } ;
typedef TYPE_1__ uv_fs_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int *,int ) ;

int FUNC_2(uv_loop_t* VAR_3, uv_fs_event_t* VAR_4) {
  FUNC_1(VAR_3, (uv_handle_t*) VAR_4, VAR_1);
  VAR_4->dir_handle = VAR_0;
  VAR_4->buffer = ((void*)0);
  VAR_4->req_pending = 0;
  VAR_4->filew = ((void*)0);
  VAR_4->short_filew = ((void*)0);
  VAR_4->dirw = ((void*)0);

  FUNC_0(&VAR_4->req, VAR_2);
  VAR_4->req.data = VAR_4;

  return 0;
}

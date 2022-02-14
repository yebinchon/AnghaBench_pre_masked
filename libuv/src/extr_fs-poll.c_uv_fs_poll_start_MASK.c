
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_6__ {struct poll_ctx* poll_ctx; int * loop; } ;
typedef TYPE_1__ uv_fs_poll_t ;
typedef int uv_fs_poll_cb ;
struct TYPE_7__ {int flags; } ;
struct poll_ctx {unsigned int interval; struct poll_ctx* previous; int path; int fs_req; TYPE_2__ timer_handle; TYPE_1__* parent_handle; int start_time; int poll_cb; int * loop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,size_t) ;
 int VAR_2 ;
 size_t FUNC_1 (char const*) ;
 struct poll_ctx* FUNC_2 (int,int) ;
 int FUNC_3 (struct poll_ctx*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*) ;

int FUNC_10(uv_fs_poll_t* VAR_3,
                     uv_fs_poll_cb VAR_4,
                     const char* VAR_5,
                     unsigned int VAR_6) {
  struct poll_ctx* VAR_7;
  uv_loop_t* VAR_8;
  size_t VAR_9;
  int VAR_10;

  if (FUNC_7((uv_handle_t*)VAR_3))
    return 0;

  VAR_8 = VAR_3->loop;
  VAR_9 = FUNC_1(VAR_5);
  VAR_7 = FUNC_2(1, sizeof(*VAR_7) + VAR_9);

  if (VAR_7 == ((void*)0))
    return VAR_0;

  VAR_7->loop = VAR_8;
  VAR_7->poll_cb = VAR_4;
  VAR_7->interval = VAR_6 ? VAR_6 : 1;
  VAR_7->start_time = FUNC_8(VAR_8);
  VAR_7->parent_handle = VAR_3;
  FUNC_0(VAR_7->path, VAR_5, VAR_9 + 1);

  VAR_10 = FUNC_9(VAR_8, &VAR_7->timer_handle);
  if (VAR_10 < 0)
    goto error;

  VAR_7->timer_handle.flags |= VAR_1;
  FUNC_5(&VAR_7->timer_handle);

  VAR_10 = FUNC_6(VAR_8, &VAR_7->fs_req, VAR_7->path, VAR_2);
  if (VAR_10 < 0)
    goto error;

  if (VAR_3->poll_ctx != ((void*)0))
    VAR_7->previous = VAR_3->poll_ctx;
  VAR_3->poll_ctx = VAR_7;
  FUNC_4(VAR_3);

  return 0;

error:
  FUNC_3(VAR_7);
  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int flags; int alloc_cb; int io_watcher; int loop; int read_cb; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_read_cb ;
typedef int uv_alloc_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(uv_stream_t* VAR_9,
                  uv_alloc_cb VAR_10,
                  uv_read_cb VAR_11) {
  FUNC_0(VAR_9->type == VAR_7 || VAR_9->type == VAR_6 ||
      VAR_9->type == VAR_8);

  if (VAR_9->flags & VAR_3)
    return VAR_1;

  if (!(VAR_9->flags & VAR_4))
    return VAR_2;




  VAR_9->flags |= VAR_5;





  FUNC_0(FUNC_3(VAR_9) >= 0);
  FUNC_0(VAR_10);

  VAR_9->read_cb = VAR_11;
  VAR_9->alloc_cb = VAR_10;

  FUNC_2(VAR_9->loop, &VAR_9->io_watcher, VAR_0);
  FUNC_1(VAR_9);
  FUNC_4(VAR_9);

  return 0;
}

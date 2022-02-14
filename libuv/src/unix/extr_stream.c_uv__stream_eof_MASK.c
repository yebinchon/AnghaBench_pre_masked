
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* read_cb ) (TYPE_1__*,int ,int const*) ;int io_watcher; int loop; int flags; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_5, const uv_buf_t* VAR_6) {
  VAR_5->flags |= VAR_4;
  VAR_5->flags &= ~VAR_3;
  FUNC_3(VAR_5->loop, &VAR_5->io_watcher, VAR_0);
  if (!FUNC_2(&VAR_5->io_watcher, VAR_1))
    FUNC_1(VAR_5);
  FUNC_4(VAR_5);
  VAR_5->read_cb(VAR_5, VAR_2, VAR_6);
}

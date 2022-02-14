
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle_queue; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int *,int *,int ) ;

int FUNC_3(uv_loop_t* VAR_5, uv_tcp_t* VAR_6, unsigned int VAR_7) {
  int VAR_8;


  VAR_8 = VAR_7 & 0xFF;
  if (VAR_8 != VAR_0 && VAR_8 != VAR_1 && VAR_8 != VAR_2)
    return VAR_3;

  if (VAR_7 & ~0xFF)
    return VAR_3;

  FUNC_2(VAR_5, (uv_stream_t*)VAR_6, VAR_4);





  if (VAR_8 != VAR_2) {
    int VAR_9 = FUNC_1(VAR_6, VAR_8, 0);
    if (VAR_9) {
      FUNC_0(&VAR_6->handle_queue);
      return VAR_9;
    }
  }

  return 0;
}

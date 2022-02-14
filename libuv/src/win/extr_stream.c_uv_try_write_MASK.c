
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_tty_t ;
typedef int uv_tcp_t ;
struct TYPE_3__ {int flags; int type; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int *,int const*,unsigned int) ;

int FUNC_3(uv_stream_t* VAR_6,
                 const uv_buf_t VAR_7[],
                 unsigned int VAR_8) {
  if (VAR_6->flags & VAR_4)
    return VAR_1;
  if (!(VAR_6->flags & VAR_5))
    return VAR_3;

  switch (VAR_6->type) {
    case 129:
      return FUNC_1((uv_tcp_t*) VAR_6, VAR_7, VAR_8);
    case 128:
      return FUNC_2((uv_tty_t*) VAR_6, VAR_7, VAR_8);
    case 130:
      return VAR_0;
    default:
      FUNC_0(0);
      return VAR_2;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_6__ {int * loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,void (*) (TYPE_1__*,int,int const*)) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *,struct sockaddr const*,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(uv_stream_t* VAR_11, ssize_t VAR_12, const uv_buf_t* VAR_13) {
  uv_loop_t* VAR_14;
  unsigned int VAR_15;

  VAR_5 = (uv_tcp_t*) VAR_11 - &VAR_9[0];
  FUNC_0(VAR_5 < VAR_4);
  FUNC_0(0 == FUNC_3(VAR_11));
  FUNC_0(1 == VAR_12);

  VAR_14 = VAR_11->loop;
  VAR_6++;


  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
    if (VAR_15 != VAR_5)
      FUNC_1((uv_handle_t*) &VAR_9[VAR_15], VAR_2);
  }


  FUNC_1((uv_handle_t*) &VAR_10, VAR_2);


  FUNC_0(0 == FUNC_5(VAR_14, &VAR_7));
  FUNC_0(0 == FUNC_4(&VAR_8,
                             &VAR_7,
                             (const struct sockaddr*) &VAR_0,
                             VAR_3));
  FUNC_0(0 == FUNC_2((uv_stream_t*) &VAR_7, VAR_1, FUNC_6));
}

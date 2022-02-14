
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_3__ {scalar_t__* base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_5, ssize_t VAR_6, const uv_buf_t* VAR_7) {
  ssize_t VAR_8;
  int VAR_9;

  FUNC_0(VAR_6 >= 0);
  VAR_2 += VAR_6;

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    FUNC_0(VAR_7->base[VAR_8] == VAR_0);
  FUNC_1(VAR_7->base);

  if (VAR_2 >= VAR_1) {
    VAR_9 = FUNC_2(VAR_5);
    FUNC_0(VAR_9 == 0);
    VAR_9 = FUNC_3(&VAR_4, VAR_5, VAR_3);
    FUNC_0(VAR_9 == 0);
  }
}

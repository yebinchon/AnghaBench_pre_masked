
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_stream_t ;
struct TYPE_4__ {int * handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *,int,int ) ;
 int VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static void FUNC_5(uv_connect_t* VAR_13, int VAR_14) {
  uv_buf_t VAR_15[VAR_0];
  uv_stream_t* VAR_16;
  int VAR_17, VAR_18, VAR_19;

  FUNC_0(VAR_13 == &VAR_6);
  FUNC_0(VAR_14 == 0);

  VAR_16 = VAR_13->handle;
  VAR_5++;


  for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
    uv_write_t* VAR_20 = VAR_12 + VAR_17;

    for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
      VAR_15[VAR_18] = FUNC_1(VAR_8 + VAR_4, VAR_1);
      VAR_4 += VAR_1;
    }

    VAR_19 = FUNC_4(VAR_20, VAR_16, VAR_15, VAR_0, VAR_11);
    FUNC_0(VAR_19 == 0);
  }


  VAR_19 = FUNC_3(&VAR_10, VAR_16, VAR_9);
  FUNC_0(VAR_19 == 0);


  VAR_19 = FUNC_2(VAR_16, VAR_3, VAR_7);
  FUNC_0(VAR_19 == 0);
}

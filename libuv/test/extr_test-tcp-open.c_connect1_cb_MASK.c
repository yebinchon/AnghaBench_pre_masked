
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_4__ {int * handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,int *,int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(uv_connect_t* VAR_8, int VAR_9) {
  uv_buf_t VAR_10;
  uv_stream_t* VAR_11;
  int VAR_12;

  FUNC_0(VAR_8 == &VAR_2);
  FUNC_0(VAR_9 == 0);

  VAR_11 = VAR_8->handle;
  VAR_1++;

  VAR_12 = FUNC_4(FUNC_2(), &VAR_5);
  FUNC_0(VAR_12 == 0);

  VAR_12 = FUNC_5(&VAR_5, VAR_4, 2000, 0);
  FUNC_0(VAR_12 == 0);

  VAR_10 = FUNC_1("P", 1);
  VAR_12 = FUNC_6(&VAR_7, VAR_11, &VAR_10, 1, VAR_6);
  FUNC_0(VAR_12 == 0);


  VAR_12 = FUNC_3(VAR_11, VAR_0, VAR_3);
  FUNC_0(VAR_12 == 0);
}

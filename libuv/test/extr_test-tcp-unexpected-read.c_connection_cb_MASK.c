
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_5, int VAR_6) {
  uv_buf_t VAR_7;

  VAR_7 = FUNC_2("PING", 4);

  FUNC_0(0 == VAR_6);
  FUNC_0(0 == FUNC_1(VAR_5, (uv_stream_t*) &VAR_1));
  FUNC_0(0 == FUNC_3((uv_stream_t*) &VAR_1, VAR_0, VAR_2));
  FUNC_0(0 == FUNC_4(&VAR_4, (uv_stream_t*) &VAR_1,
                       &VAR_7, 1, VAR_3));
}

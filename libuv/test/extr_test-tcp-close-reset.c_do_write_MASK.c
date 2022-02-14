
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_buf_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *,int *,int,int ) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(uv_tcp_t* VAR_2) {
  uv_buf_t VAR_3;
  unsigned VAR_4;
  int VAR_5;

  VAR_3 = FUNC_2("PING", 4);
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
    VAR_5 = FUNC_3(&VAR_1[VAR_4], (uv_stream_t*) VAR_2, &VAR_3, 1, VAR_0);
    FUNC_1(VAR_5 == 0);
  }
}

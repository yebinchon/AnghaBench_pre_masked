
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_req_t ;
typedef int uv_connect_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 int * VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_7 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8(uv_connect_t* VAR_7, int VAR_8) {
  int VAR_9;

  if (VAR_8) {
    FUNC_3(VAR_3, "%s", FUNC_7(VAR_8));
    FUNC_2(VAR_3);
  }
  FUNC_0(VAR_8 == 0);

  VAR_6++;
  FUNC_5((uv_req_t*) VAR_7);

  FUNC_4();

  if (VAR_6 == VAR_0) {
    FUNC_6();


    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
      if (VAR_5 == VAR_1)
        FUNC_1((uv_stream_t*) &VAR_4[VAR_9]);
      else
        FUNC_1((uv_stream_t*) &VAR_2[VAR_9]);
    }
  }
}

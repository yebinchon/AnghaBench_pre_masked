
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_read_cb ;
typedef int uv_process_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(const char* VAR_3, uv_read_cb VAR_4) {
  uv_process_t VAR_5;
  int VAR_6;

  FUNC_2(&VAR_1, &VAR_5, VAR_3);
  FUNC_4((uv_stream_t*)&VAR_1, VAR_2, VAR_4);

  VAR_6 = FUNC_5(FUNC_3(), VAR_0);
  FUNC_0(VAR_6 == 0);

  FUNC_1();
  return 0;
}

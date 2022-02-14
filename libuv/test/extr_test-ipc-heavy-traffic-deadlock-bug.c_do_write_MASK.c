
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_buf_t ;
struct write_info {int write_req; int * buffers; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct write_info* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int *,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_4) {
  struct write_info* VAR_5;
  uv_buf_t VAR_6[VAR_0];
  size_t VAR_7;
  int VAR_8;

  VAR_5 = FUNC_1(sizeof *VAR_5);
  FUNC_0(VAR_5 != ((void*)0));

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    FUNC_2(&VAR_5->buffers[VAR_7], VAR_1, VAR_2);
    VAR_6[VAR_7] = FUNC_3(VAR_5->buffers[VAR_7], VAR_2);
  }

  VAR_8 = FUNC_4(
      &VAR_5->write_req, VAR_4, VAR_6, VAR_0, VAR_3);
  FUNC_0(VAR_8 == 0);
}

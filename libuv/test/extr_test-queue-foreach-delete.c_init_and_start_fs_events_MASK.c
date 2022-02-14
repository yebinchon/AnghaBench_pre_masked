
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
typedef int uv_fs_event_cb ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(uv_loop_t* VAR_3) {
  size_t VAR_4;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
    int VAR_5;
    VAR_5 = FUNC_2(VAR_3, &VAR_0[VAR_4]);
    FUNC_1(VAR_5 == 0);

    VAR_5 = FUNC_3(&VAR_0[VAR_4],
                          (uv_fs_event_cb)VAR_1[VAR_4],
                          VAR_2,
                          0);
    FUNC_1(VAR_5 == 0);
  }
}

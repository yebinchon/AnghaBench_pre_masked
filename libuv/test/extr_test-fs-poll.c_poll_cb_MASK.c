
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero_statbuf ;
typedef int uv_stat_t ;
typedef int uv_handle_t ;
typedef int uv_fs_poll_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_8(uv_fs_poll_t* VAR_7,
                    int VAR_8,
                    const uv_stat_t* VAR_9,
                    const uv_stat_t* VAR_10) {
  uv_stat_t VAR_11;

  FUNC_2(&VAR_11, 0, sizeof(VAR_11));

  FUNC_0(VAR_7 == &VAR_4);
  FUNC_0(1 == FUNC_6((uv_handle_t*) VAR_7));
  FUNC_0(VAR_9 != ((void*)0));
  FUNC_0(VAR_10 != ((void*)0));

  switch (VAR_3++) {
  case 0:
    FUNC_0(VAR_8 == VAR_1);
    FUNC_0(0 == FUNC_1(VAR_9, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 == FUNC_1(VAR_10, &VAR_11, sizeof(VAR_11)));
    FUNC_4(VAR_0);
    break;

  case 1:
    FUNC_0(VAR_8 == 0);
    FUNC_0(0 == FUNC_1(VAR_9, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 != FUNC_1(VAR_10, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 == FUNC_7(&VAR_6, VAR_5, 20, 0));
    break;

  case 2:
    FUNC_0(VAR_8 == 0);
    FUNC_0(0 != FUNC_1(VAR_9, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 != FUNC_1(VAR_10, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 == FUNC_7(&VAR_6, VAR_5, 200, 0));
    break;

  case 3:
    FUNC_0(VAR_8 == 0);
    FUNC_0(0 != FUNC_1(VAR_9, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 != FUNC_1(VAR_10, &VAR_11, sizeof(VAR_11)));
    FUNC_3(VAR_0);
    break;

  case 4:
    FUNC_0(VAR_8 == VAR_1);
    FUNC_0(0 != FUNC_1(VAR_9, &VAR_11, sizeof(VAR_11)));
    FUNC_0(0 == FUNC_1(VAR_10, &VAR_11, sizeof(VAR_11)));
    FUNC_5((uv_handle_t*)VAR_7, VAR_2);
    break;

  default:
    FUNC_0(0);
  }
}

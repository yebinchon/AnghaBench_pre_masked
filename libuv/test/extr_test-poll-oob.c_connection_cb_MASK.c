
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int,int ) ;

__attribute__((used)) static void FUNC_8(uv_stream_t* VAR_13, int VAR_14) {
  int VAR_15;

  FUNC_0(0 == VAR_14);
  FUNC_0(0 == FUNC_2(VAR_13, (uv_stream_t*) &VAR_9));
  FUNC_0(0 == FUNC_4((uv_handle_t*) &VAR_9, &VAR_12));
  FUNC_0(0 == FUNC_6(FUNC_3(), &VAR_11[0], VAR_5));
  FUNC_0(0 == FUNC_6(FUNC_3(), &VAR_11[1], VAR_12));
  FUNC_0(0 == FUNC_7(&VAR_11[0],
                            VAR_2 | VAR_3 | VAR_4,
                            VAR_10));
  FUNC_0(0 == FUNC_7(&VAR_11[1],
                            VAR_3,
                            VAR_10));
  do {
    VAR_15 = FUNC_1(VAR_12, "hello", 5, VAR_1);
  } while (VAR_15 < 0 && VAR_6 == VAR_0);
  FUNC_0(5 == VAR_15);

  do {
    VAR_15 = FUNC_1(VAR_12, "world", 5, 0);
  } while (VAR_15 < 0 && VAR_6 == VAR_0);
  FUNC_0(5 == VAR_15);

  FUNC_0(0 == FUNC_5(&VAR_7, VAR_8));
}

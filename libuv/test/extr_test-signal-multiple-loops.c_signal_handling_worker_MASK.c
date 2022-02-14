
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_signal_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
typedef enum signal_action { ____Placeholder_signal_action } signal_action ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_8(void* VAR_9) {
  enum signal_action VAR_10;
  uv_signal_t VAR_11;
  uv_signal_t VAR_12;
  uv_signal_t VAR_13;
  uv_loop_t VAR_14;
  int VAR_15;

  VAR_10 = (enum signal_action) (uintptr_t) VAR_9;

  FUNC_0(0 == FUNC_3(&VAR_14));


  if (VAR_10 == VAR_0 || VAR_10 == VAR_3) {
    VAR_15 = FUNC_6(&VAR_14, &VAR_11);
    FUNC_0(VAR_15 == 0);
    VAR_15 = FUNC_7(&VAR_11, VAR_7, VAR_2);
    FUNC_0(VAR_15 == 0);
    VAR_15 = FUNC_6(&VAR_14, &VAR_12);
    FUNC_0(VAR_15 == 0);
    VAR_15 = FUNC_7(&VAR_12, VAR_7, VAR_2);
    FUNC_0(VAR_15 == 0);
  }

  if (VAR_10 == VAR_1 || VAR_10 == VAR_3) {
    VAR_15 = FUNC_6(&VAR_14, &VAR_13);
    FUNC_0(VAR_15 == 0);
    VAR_15 = FUNC_7(&VAR_13, VAR_8, VAR_4);
    FUNC_0(VAR_15 == 0);
  }


  FUNC_5(&VAR_6);




  VAR_15 = FUNC_4(&VAR_14, VAR_5);
  FUNC_0(VAR_15 == 0);


  if (VAR_10 == VAR_0 || VAR_10 == VAR_3) {
    VAR_15 = FUNC_7(&VAR_11, VAR_7, VAR_2);
    FUNC_0(VAR_15 == 0);
    VAR_15 = FUNC_7(&VAR_12, VAR_7, VAR_2);
    FUNC_0(VAR_15 == 0);
  }

  if (VAR_10 == VAR_1 || VAR_10 == VAR_3) {
    VAR_15 = FUNC_7(&VAR_13, VAR_8, VAR_4);
    FUNC_0(VAR_15 == 0);
  }


  FUNC_5(&VAR_6);

  VAR_15 = FUNC_4(&VAR_14, VAR_5);
  FUNC_0(VAR_15 == 0);


  if (VAR_10 == VAR_0 || VAR_10 == VAR_3) {
    FUNC_1((uv_handle_t*) &VAR_11, ((void*)0));
    FUNC_1((uv_handle_t*) &VAR_12, ((void*)0));
  }

  if (VAR_10 == VAR_1 || VAR_10 == VAR_3) {
    FUNC_1((uv_handle_t*) &VAR_13, ((void*)0));
  }


  VAR_15 = FUNC_4(&VAR_14, VAR_5);
  FUNC_0(VAR_15 == 0);

  FUNC_2(&VAR_14);
}

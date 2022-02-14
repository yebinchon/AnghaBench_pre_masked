
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int handle_queue; } ;
typedef TYPE_1__ uv_tty_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;
typedef scalar_t__ uv_handle_type ;
typedef int path ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int,int ,...) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(uv_loop_t* VAR_15, uv_tty_t* VAR_16, int VAR_17, int VAR_18) {
  uv_handle_type VAR_19;
  int VAR_20;
  int VAR_21;
  int VAR_22;
  int VAR_23;
  int VAR_24;
  char VAR_25[256];
  (void)VAR_18;





  VAR_19 = FUNC_12(VAR_17);
  if (VAR_19 == VAR_7 || VAR_19 == VAR_13)
    return VAR_6;

  VAR_20 = 0;
  VAR_21 = -1;


  do
    VAR_23 = FUNC_2(VAR_17, VAR_1);
  while (VAR_23 == -1 && VAR_14 == VAR_0);

  if (VAR_23 == -1)
    return FUNC_1(VAR_14);
  VAR_24 = VAR_23 & VAR_3;
  if (VAR_19 == VAR_11) {





    if (FUNC_11(VAR_17) && FUNC_3(VAR_17, VAR_25, sizeof(VAR_25)) == 0)
      VAR_22 = FUNC_7(VAR_25, VAR_24);
    else
      VAR_22 = -1;

    if (VAR_22 < 0) {

      if (VAR_24 != VAR_4)
        VAR_20 |= VAR_8;
      goto skip;
    }

    VAR_21 = VAR_22;

    VAR_22 = FUNC_5(VAR_21, VAR_17);
    if (VAR_22 < 0 && VAR_22 != VAR_6) {




      FUNC_4(VAR_21);
      return VAR_22;
    }

    VAR_17 = VAR_21;
  }

skip:
  FUNC_8(VAR_15, (uv_stream_t*) VAR_16, VAR_11);





  if (!(VAR_20 & VAR_8))
    FUNC_6(VAR_17, 1);
  if (VAR_24 != VAR_5)
    VAR_20 |= VAR_9;
  if (VAR_24 != VAR_4)
    VAR_20 |= VAR_10;

  FUNC_9((uv_stream_t*) VAR_16, VAR_17, VAR_20);
  VAR_16->mode = VAR_12;

  return 0;
}

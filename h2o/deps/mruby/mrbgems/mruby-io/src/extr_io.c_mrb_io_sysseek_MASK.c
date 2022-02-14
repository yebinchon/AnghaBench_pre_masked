
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd; } ;
typedef int off_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int mrb_float ;


 int VAR_0 ;
 int VAR_1 ;
 struct mrb_io* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;

mrb_value
FUNC_7(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct mrb_io *VAR_4;
  off_t VAR_5;
  mrb_int VAR_6, VAR_7 = -1;

  FUNC_4(VAR_2, "i|i", &VAR_6, &VAR_7);
  if (VAR_7 < 0) {
    VAR_7 = 0;
  }

  VAR_4 = FUNC_0(VAR_2, VAR_3);
  VAR_5 = FUNC_1(VAR_4->fd, (off_t)VAR_6, (int)VAR_7);
  if (VAR_5 == -1) {
    FUNC_6(VAR_2, "sysseek");
  }
  if (VAR_5 > VAR_1) {

    return FUNC_3(VAR_2, (mrb_float)VAR_5);



  } else {
    return FUNC_2(VAR_5);
  }
}

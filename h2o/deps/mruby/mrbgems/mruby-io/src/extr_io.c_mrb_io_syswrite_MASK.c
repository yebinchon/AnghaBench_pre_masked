
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd2; int fd; int writable; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int fsize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mrb_io* FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,int ,int ) ;

mrb_value
FUNC_10(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct mrb_io *VAR_4;
  mrb_value VAR_5, VAR_6;
  int VAR_7, VAR_8;

  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (! VAR_4->writable) {
    FUNC_6(VAR_2, VAR_0, "not opened for writing");
  }

  FUNC_5(VAR_2, "S", &VAR_5);
  if (FUNC_8(VAR_5) != VAR_1) {
    VAR_6 = FUNC_4(VAR_2, VAR_5, "to_s", 0);
  } else {
    VAR_6 = VAR_5;
  }

  if (VAR_4->fd2 == -1) {
    VAR_7 = VAR_4->fd;
  } else {
    VAR_7 = VAR_4->fd2;
  }
  VAR_8 = FUNC_9(VAR_7, FUNC_1(VAR_6), (fsize_t)FUNC_0(VAR_6));
  if (VAR_8 == -1) {
    FUNC_7(VAR_2, 0);
  }

  return FUNC_3(VAR_8);
}

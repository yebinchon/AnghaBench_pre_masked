
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct mrb_io {scalar_t__ fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (char*,struct stat*) ;
 int FUNC_1 (scalar_t__,struct stat*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_12(mrb_state *VAR_2, mrb_value VAR_3, struct stat *VAR_4, int VAR_5)
{
  mrb_value VAR_6;
  mrb_value VAR_7, VAR_8;

  VAR_7 = FUNC_7(FUNC_2(VAR_2, "IO"));
  VAR_8 = FUNC_7(FUNC_2(VAR_2, "String"));

  VAR_6 = FUNC_3(VAR_2, VAR_3, "is_a?", 1, VAR_7);
  if (FUNC_10(VAR_6)) {
    struct mrb_io *VAR_9;
    VAR_9 = (struct mrb_io *)FUNC_4(VAR_2, VAR_3, &VAR_1);

    if (VAR_9 && VAR_9->fd >= 0) {
      return FUNC_1(VAR_9->fd, VAR_4);
    }

    FUNC_8(VAR_2, VAR_0, "closed stream");
    return -1;
  }

  VAR_6 = FUNC_3(VAR_2, VAR_3, "is_a?", 1, VAR_8);
  if (FUNC_10(VAR_6)) {
    char *VAR_10 = FUNC_6(FUNC_9(VAR_2, VAR_3), -1);
    int VAR_11;
    if (VAR_5) {
      VAR_11 = FUNC_0(VAR_10, VAR_4);
    } else {
      VAR_11 = FUNC_11(VAR_10, VAR_4);
    }
    FUNC_5(VAR_10);
    return VAR_11;
  }

  return -1;
}

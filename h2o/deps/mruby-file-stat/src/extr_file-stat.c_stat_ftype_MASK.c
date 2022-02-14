
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct stat* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char const*,size_t) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct stat *VAR_2 = FUNC_7(VAR_0, VAR_1);
  const char *VAR_3;

  if (FUNC_5(VAR_2->st_mode)) {
    VAR_3 = "file";
  }
  else if (FUNC_2(VAR_2->st_mode)) {
    VAR_3 = "directory";
  }
  else if (FUNC_1(VAR_2->st_mode)) {
    VAR_3 = "characterSpecial";
  }
  else {
    VAR_3 = "unknown";
  }
  return FUNC_8(VAR_0, VAR_3, (size_t)FUNC_9(VAR_3));
}

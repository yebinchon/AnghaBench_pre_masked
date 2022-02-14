
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fsck_options {int dummy; } ;


 int FUNC_0 (char*,int) ;


 int FUNC_1 (char*) ;
 int FUNC_2 (struct object*) ;
 int FUNC_3 (int ,int ,int ,int ,char const*) ;
 int FUNC_4 (struct object*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct fsck_options *VAR_1,
 struct object *VAR_2, int VAR_3, const char *VAR_4)
{
 switch (VAR_3) {
 case 128:

  FUNC_3(VAR_0, FUNC_1("warning in %s %s: %s"),
      FUNC_4(VAR_2), FUNC_2(VAR_2), VAR_4);
  return 0;
 case 129:

  FUNC_3(VAR_0, FUNC_1("error in %s %s: %s"),
      FUNC_4(VAR_2), FUNC_2(VAR_2), VAR_4);
  return 1;
 default:
  FUNC_0("%d (FSCK_IGNORE?) should never trigger this callback", VAR_3);
 }
}

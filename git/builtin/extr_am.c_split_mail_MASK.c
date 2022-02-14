
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int dummy; } ;
typedef enum patch_format { ____Placeholder_patch_format } patch_format ;


 int FUNC_0 (char*) ;





 int FUNC_1 (char*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct am_state*,char const**,int) ;
 int FUNC_3 (struct am_state*,char const**,int,int) ;
 int FUNC_4 (struct am_state*,char const**,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct am_state *VAR_2, enum patch_format VAR_3,
   const char **VAR_4, int VAR_5)
{
 if (VAR_5 < 0) {
  VAR_5 = 0;
  FUNC_1("am.keepcr", &VAR_5);
 }

 switch (VAR_3) {
 case 131:
  return FUNC_3(VAR_2, VAR_4, VAR_5, 0);
 case 129:
  return FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
 case 128:
  return FUNC_4(VAR_2, VAR_4, VAR_5);
 case 132:
  return FUNC_2(VAR_0, VAR_2, VAR_4, VAR_5);
 case 130:
  return FUNC_3(VAR_2, VAR_4, VAR_5, 1);
 default:
  FUNC_0("invalid patch_format");
 }
 return -1;
}

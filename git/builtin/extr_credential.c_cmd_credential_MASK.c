
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int dummy; } ;


 struct credential VAR_0 ;
 int FUNC_0 (struct credential*) ;
 int FUNC_1 (struct credential*) ;
 scalar_t__ FUNC_2 (struct credential*,int ) ;
 int FUNC_3 (struct credential*) ;
 int FUNC_4 (struct credential*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

int FUNC_8(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 const char *VAR_7;
 struct credential VAR_8 = VAR_0;

 if (VAR_4 != 2 || !FUNC_6(VAR_5[1], "-h"))
  FUNC_7(VAR_3);
 VAR_7 = VAR_5[1];

 if (FUNC_2(&VAR_8, VAR_1) < 0)
  FUNC_5("unable to read credential from stdin");

 if (!FUNC_6(VAR_7, "fill")) {
  FUNC_1(&VAR_8);
  FUNC_4(&VAR_8, VAR_2);
 } else if (!FUNC_6(VAR_7, "approve")) {
  FUNC_0(&VAR_8);
 } else if (!FUNC_6(VAR_7, "reject")) {
  FUNC_3(&VAR_8);
 } else {
  FUNC_7(VAR_3);
 }
 return 0;
}

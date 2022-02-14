
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int long_name; struct diff_options* value; } ;
struct diff_options {int detect_rename; int rename_score; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const**) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_1,
     const char *VAR_2, int VAR_3)
{
 struct diff_options *VAR_4 = VAR_1->value;

 FUNC_0(VAR_3);
 if (!VAR_2)
  VAR_2 = "";
 VAR_4->rename_score = FUNC_3(&VAR_2);
 if (*VAR_2 != 0)
  return FUNC_2(FUNC_1("invalid argument to %s"), VAR_1->long_name);

 VAR_4->detect_rename = VAR_0;
 return 0;
}

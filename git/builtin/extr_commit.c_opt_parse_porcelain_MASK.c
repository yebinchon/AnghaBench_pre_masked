
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;
typedef enum wt_status_format { ____Placeholder_wt_status_format } wt_status_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 enum wt_status_format *VAR_6 = (enum wt_status_format *)VAR_3->value;
 if (VAR_5)
  *VAR_6 = VAR_0;
 else if (!VAR_4)
  *VAR_6 = VAR_1;
 else if (!FUNC_1(VAR_4, "v1") || !FUNC_1(VAR_4, "1"))
  *VAR_6 = VAR_1;
 else if (!FUNC_1(VAR_4, "v2") || !FUNC_1(VAR_4, "2"))
  *VAR_6 = VAR_2;
 else
  FUNC_0("unsupported porcelain version '%s'", VAR_4);

 return 0;
}

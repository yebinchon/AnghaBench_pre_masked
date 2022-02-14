
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct term_info {char* ti_name; char* ti_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct term_info*) ;
 scalar_t__ FUNC_1 (int ,int ,struct term_info*) ;
 int FUNC_2 (char*,char*,char*,char*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1)
{
 struct term_info VAR_2, VAR_3;

 FUNC_0(0, &VAR_2);
 FUNC_3((char *)VAR_3.ti_name, VAR_1, sizeof(VAR_3.ti_name));
 if (FUNC_1(0, VAR_0, &VAR_3) != 0)
  FUNC_4("SETTERM '%s'", VAR_1);
 FUNC_0(0, &VAR_3);
 FUNC_2("%s (%s) -> %s (%s)\n", VAR_2.ti_name, VAR_2.ti_desc,
     VAR_3.ti_name, VAR_3.ti_desc);
}

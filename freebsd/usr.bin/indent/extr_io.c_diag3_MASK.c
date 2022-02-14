
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__,char const*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_1(int VAR_5, const char *VAR_6, int VAR_7)
{
    if (VAR_5)
 VAR_0 = 1;
    if (VAR_2 == VAR_4) {
 FUNC_0(VAR_4, "/**INDENT** %s@%d: ", VAR_5 == 0 ? "Warning" : "Error", VAR_1);
 FUNC_0(VAR_4, VAR_6, VAR_7);
 FUNC_0(VAR_4, " */\n");
    }
    else {
 FUNC_0(VAR_3, "%s@%d: ", VAR_5 == 0 ? "Warning" : "Error", VAR_1);
 FUNC_0(VAR_3, VAR_6, VAR_7);
 FUNC_0(VAR_3, "\n");
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clar_summary {int fp; } ;


 int FUNC_0 (int ,char*,char const*,char const*) ;

int FUNC_1(
    struct clar_summary *VAR_0, const char *VAR_1, int VAR_2)
{
 const char *VAR_3;

 if (VAR_2 == 0) VAR_3 = "";
 else if (VAR_2 == 1) VAR_3 = "\t";
 else VAR_3 = "\t\t";

 return FUNC_0(VAR_0->fp, "%s</%s>\n", VAR_3, VAR_1);
}

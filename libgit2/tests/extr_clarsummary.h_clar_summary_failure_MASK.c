
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clar_summary {int fp; } ;


 int FUNC_0 (int ,char*,char const*,char const*,char const*) ;

int FUNC_1(struct clar_summary *VAR_0,
    const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 return FUNC_0(VAR_0->fp,
     "\t\t\t<failure type=\"%s\"><![CDATA[%s\n%s]]></failure>\n",
     VAR_1, VAR_2, VAR_3);
}

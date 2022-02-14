
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{
 FUNC_0("no quotes at all");
 FUNC_0("\"no trailing quote");
 FUNC_0("no leading quote\"");
 FUNC_0("\"invalid \\z escape char\"");
 FUNC_0("\"\\q invalid escape char\"");
 FUNC_0("\"invalid escape char \\p\"");
 FUNC_0("\"invalid \\1 escape char \"");
 FUNC_0("\"invalid \\14 escape char \"");
 FUNC_0("\"invalid \\280 escape char\"");
 FUNC_0("\"invalid \\378 escape char\"");
 FUNC_0("\"invalid \\380 escape char\"");
 FUNC_0("\"invalid \\411 escape char\"");
 FUNC_0("\"truncated escape char \\\"");
 FUNC_0("\"truncated escape char \\0\"");
 FUNC_0("\"truncated escape char \\01\"");
}

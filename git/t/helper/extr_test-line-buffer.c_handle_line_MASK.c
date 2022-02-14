
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char const*,struct line_buffer*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, struct line_buffer *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_0, ' ');
 if (!VAR_2)
  FUNC_0("no argument in line: %s", VAR_0);
 FUNC_1(VAR_0, VAR_2 + 1, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct line_buffer*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct line_buffer *VAR_0)
{
 if (FUNC_0(VAR_0))
  return FUNC_2("error reading delta");
 return FUNC_1("invalid delta: unexpected end of file");
}

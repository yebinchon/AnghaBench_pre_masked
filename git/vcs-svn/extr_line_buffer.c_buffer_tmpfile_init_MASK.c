
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int infile; } ;


 int FUNC_0 () ;

int FUNC_1(struct line_buffer *VAR_0)
{
 VAR_0->infile = FUNC_0();
 if (!VAR_0->infile)
  return -1;
 return 0;
}

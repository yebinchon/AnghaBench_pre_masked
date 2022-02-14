
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {char* line_buffer; int infile; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;

char *FUNC_3(struct line_buffer *VAR_0)
{
 char *VAR_1;
 if (!FUNC_1(VAR_0->line_buffer, sizeof(VAR_0->line_buffer), VAR_0->infile))

  return ((void*)0);
 VAR_1 = VAR_0->line_buffer + FUNC_2(VAR_0->line_buffer);
 if (VAR_1[-1] == '\n')
  VAR_1[-1] = '\0';
 else if (FUNC_0(VAR_0->infile))
  ;
 else





  return ((void*)0);
 return VAR_0->line_buffer;
}

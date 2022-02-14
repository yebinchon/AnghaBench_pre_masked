
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int infile; } ;


 int FUNC_0 (char const*,char*) ;
 int VAR_0 ;

int FUNC_1(struct line_buffer *VAR_1, const char *VAR_2)
{
 VAR_1->infile = VAR_2 ? FUNC_0(VAR_2, "r") : VAR_0;
 if (!VAR_1->infile)
  return -1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_file {int c; int lineno; int file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct input_file *VAR_1)
{
 if (VAR_1->c == VAR_0)
  return VAR_0;

 VAR_1->c = FUNC_0(VAR_1->file);
 if (VAR_1->c == '\n')
  VAR_1->lineno++;

 return VAR_1->c;
}

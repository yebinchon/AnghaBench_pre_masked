
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int infile; } ;


 int VAR_0 ;
 long FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 long FUNC_2 (int ) ;

long FUNC_3(struct line_buffer *VAR_1)
{
 long VAR_2 = FUNC_2(VAR_1->infile);
 if (VAR_2 < 0)
  return FUNC_0("ftell error");
 if (FUNC_1(VAR_1->infile, 0, VAR_0))
  return FUNC_0("seek error");
 return VAR_2;
}

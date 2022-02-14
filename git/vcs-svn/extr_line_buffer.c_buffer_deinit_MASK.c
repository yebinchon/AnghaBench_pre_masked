
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {scalar_t__ infile; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

int FUNC_2(struct line_buffer *VAR_1)
{
 int VAR_2;
 if (VAR_1->infile == VAR_0)
  return FUNC_1(VAR_1->infile);
 VAR_2 = FUNC_1(VAR_1->infile);
 VAR_2 |= FUNC_0(VAR_1->infile);
 return VAR_2;
}

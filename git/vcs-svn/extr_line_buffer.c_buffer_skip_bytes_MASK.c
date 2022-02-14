
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int infile; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int,size_t,int ) ;

off_t FUNC_3(struct line_buffer *VAR_1, off_t VAR_2)
{
 char VAR_3[VAR_0];
 off_t VAR_4 = 0;
 while (VAR_4 < VAR_2 && !FUNC_0(VAR_1->infile) && !FUNC_1(VAR_1->infile)) {
  off_t VAR_5 = VAR_2 - VAR_4;
  size_t VAR_6 = VAR_5 < VAR_0 ? VAR_5 : VAR_0;
  VAR_4 += FUNC_2(VAR_3, 1, VAR_6, VAR_1->infile);
 }
 return VAR_4;
}

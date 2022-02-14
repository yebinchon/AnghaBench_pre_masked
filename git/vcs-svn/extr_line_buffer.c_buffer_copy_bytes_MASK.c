
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int infile; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct line_buffer*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (char*,int,size_t,int ) ;
 int FUNC_4 (char*,int,size_t,int ) ;
 int VAR_1 ;

off_t FUNC_5(struct line_buffer *VAR_2, off_t VAR_3)
{
 char VAR_4[VAR_0];
 off_t VAR_5 = 0;
 while (VAR_5 < VAR_3 && !FUNC_1(VAR_2->infile) && !FUNC_2(VAR_2->infile)) {
  off_t VAR_6 = VAR_3 - VAR_5;
  size_t VAR_7 = VAR_6 < VAR_0 ? VAR_6 : VAR_0;
  VAR_7 = FUNC_3(VAR_4, 1, VAR_7, VAR_2->infile);
  VAR_5 += VAR_7;
  FUNC_4(VAR_4, 1, VAR_7, VAR_1);
  if (FUNC_2(VAR_1))
   return VAR_5 + FUNC_0(VAR_2, VAR_3 - VAR_5);
 }
 return VAR_5;
}

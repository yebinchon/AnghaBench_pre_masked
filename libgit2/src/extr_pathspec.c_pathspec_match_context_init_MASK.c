
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_match_context {int wildmatch_flags; int strncomp; int strcomp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(
 struct pathspec_match_context *VAR_5,
 bool VAR_6,
 bool VAR_7)
{
 if (VAR_6)
  VAR_5->wildmatch_flags = -1;
 else if (VAR_7)
  VAR_5->wildmatch_flags = VAR_0;
 else
  VAR_5->wildmatch_flags = 0;

 if (VAR_7) {
  VAR_5->strcomp = VAR_1;
  VAR_5->strncomp = VAR_3;
 } else {
  VAR_5->strcomp = VAR_2;
  VAR_5->strncomp = VAR_4;
 }
}

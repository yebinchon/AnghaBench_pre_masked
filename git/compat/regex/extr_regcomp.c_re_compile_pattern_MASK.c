
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_pattern_buffer {int no_sub; int newline_anchor; } ;
typedef scalar_t__ reg_errcode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 char const* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct re_pattern_buffer*,char const*,size_t,int) ;
 int VAR_3 ;

const char *
FUNC_2 (const char *VAR_4,
      size_t VAR_5,
      struct re_pattern_buffer *VAR_6)
{
  reg_errcode_t VAR_7;




  VAR_6->no_sub = !!(VAR_3 & VAR_0);


  VAR_6->newline_anchor = 1;

  VAR_7 = FUNC_1 (VAR_6, VAR_4, VAR_5, VAR_3);

  if (!VAR_7)
    return ((void*)0);
  return FUNC_0 (VAR_1 + VAR_2[(int) VAR_7]);
}

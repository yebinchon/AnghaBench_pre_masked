
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crlf_attrs {scalar_t__ auto_crlf; scalar_t__ core_eol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct crlf_attrs *VAR_5)
{
 if (VAR_5->auto_crlf == VAR_1)
  return 1;
 else if (VAR_5->auto_crlf == VAR_0)
  return 0;

 if (VAR_5->core_eol == VAR_2)
  return 1;
 if (VAR_5->core_eol == VAR_4 && VAR_3 == VAR_2)
  return 1;

 return 0;
}

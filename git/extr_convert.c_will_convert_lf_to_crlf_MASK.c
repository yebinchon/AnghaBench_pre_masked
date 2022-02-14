
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {scalar_t__ crlf; scalar_t__ lonecr; int lonelf; } ;
typedef enum crlf_action { ____Placeholder_crlf_action } crlf_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct text_stat*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct text_stat *VAR_4,
       enum crlf_action VAR_5)
{
 if (FUNC_1(VAR_5) != VAR_3)
  return 0;

 if (!VAR_4->lonelf)
  return 0;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_2 || VAR_5 == VAR_1) {


  if (VAR_4->lonecr || VAR_4->crlf)
   return 0;

  if (FUNC_0(VAR_4))
   return 0;
 }
 return 1;

}

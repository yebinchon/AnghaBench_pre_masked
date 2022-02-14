
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {scalar_t__ lonelf; scalar_t__ crlf; } ;
typedef enum crlf_action { ____Placeholder_crlf_action } crlf_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2, enum crlf_action VAR_3,
       struct text_stat *VAR_4, struct text_stat *VAR_5,
       int VAR_6)
{
 if (VAR_4->crlf && !VAR_5->crlf ) {



  if (VAR_6 & VAR_0)
   FUNC_1(FUNC_0("CRLF would be replaced by LF in %s"), VAR_2);
  else if (VAR_6 & VAR_1)
   FUNC_2(FUNC_0("CRLF will be replaced by LF in %s.\n"
      "The file will have its original line"
      " endings in your working directory"), VAR_2);
 } else if (VAR_4->lonelf && !VAR_5->lonelf ) {



  if (VAR_6 & VAR_0)
   FUNC_1(FUNC_0("LF would be replaced by CRLF in %s"), VAR_2);
  else if (VAR_6 & VAR_1)
   FUNC_2(FUNC_0("LF will be replaced by CRLF in %s.\n"
      "The file will have its original line"
      " endings in your working directory"), VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ buffer; } ;
typedef TYPE_1__ regex_t ;
typedef int reg_syntax_t ;
typedef scalar_t__ reg_errcode_t ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_2__ re_token_t ;
typedef int re_string_t ;
typedef int re_dfa_t ;
typedef int bin_tree_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int *,int *,int *,int ) ;
 int * FUNC_2 (int *,TYPE_1__*,TYPE_2__*,int ,int,scalar_t__*) ;

__attribute__((used)) static bin_tree_t *
FUNC_3 (re_string_t *VAR_6, regex_t *VAR_7, re_token_t *VAR_8,
       reg_syntax_t VAR_9, int VAR_10, reg_errcode_t *VAR_11)
{
  bin_tree_t *VAR_12, *VAR_13;
  re_dfa_t *VAR_14 = (re_dfa_t *) VAR_7->buffer;
  VAR_12 = FUNC_2 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  if (FUNC_0 (*VAR_11 != VAR_5 && VAR_12 == ((void*)0), 0))
    return ((void*)0);

  while (VAR_8->type != VAR_2 && VAR_8->type != VAR_1
  && (VAR_10 == 0 || VAR_8->type != VAR_3))
    {
      VAR_13 = FUNC_2 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
      if (FUNC_0 (*VAR_11 != VAR_5 && VAR_13 == ((void*)0), 0))
 {
   return ((void*)0);
 }
      if (VAR_12 != ((void*)0) && VAR_13 != ((void*)0))
 {
   VAR_12 = FUNC_1 (VAR_14, VAR_12, VAR_13, VAR_0);
   if (VAR_12 == ((void*)0))
     {
       *VAR_11 = VAR_4;
       return ((void*)0);
     }
 }
      else if (VAR_12 == ((void*)0))
 VAR_12 = VAR_13;

    }
  return VAR_12;
}

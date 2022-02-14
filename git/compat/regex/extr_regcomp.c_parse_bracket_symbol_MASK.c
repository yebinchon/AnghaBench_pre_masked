
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_7__ {unsigned char c; } ;
struct TYPE_9__ {int type; TYPE_1__ opr; } ;
typedef TYPE_3__ re_token_t ;
typedef int re_string_t ;
struct TYPE_8__ {unsigned char* name; } ;
struct TYPE_10__ {int type; TYPE_2__ opr; } ;
typedef TYPE_4__ bracket_elem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned char FUNC_1 (int *) ;
 unsigned char FUNC_2 (int *) ;
 char FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static reg_errcode_t
FUNC_5 (bracket_elem_t *VAR_6, re_string_t *VAR_7,
        re_token_t *VAR_8)
{
  unsigned char VAR_9, VAR_10 = VAR_8->opr.c;
  int VAR_11 = 0;
  if (FUNC_0(VAR_7))
    return VAR_4;
  for (;; ++VAR_11)
    {
      if (VAR_11 >= VAR_0)
 return VAR_4;
      if (VAR_8->type == 130)
 VAR_9 = FUNC_2 (VAR_7);
      else
 VAR_9 = FUNC_1 (VAR_7);
      if (FUNC_0(VAR_7))
 return VAR_4;
      if (VAR_9 == VAR_10 && FUNC_3 (VAR_7, 0) == ']')
 break;
      VAR_6->opr.name[VAR_11] = VAR_9;
    }
  FUNC_4 (VAR_7, 1);
  VAR_6->opr.name[VAR_11] = '\0';
  switch (VAR_8->type)
    {
    case 129:
      VAR_6->type = VAR_2;
      break;
    case 128:
      VAR_6->type = VAR_3;
      break;
    case 130:
      VAR_6->type = VAR_1;
      break;
    default:
      break;
    }
  return VAR_5;
}

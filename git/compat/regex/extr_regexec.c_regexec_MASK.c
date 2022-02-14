
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_9__ {scalar_t__ no_sub; } ;
typedef TYPE_2__ regex_t ;
typedef scalar_t__ reg_errcode_t ;
struct TYPE_10__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,char const*,int,int,int,int,size_t,TYPE_1__*,int) ;
 int FUNC_3 (char const*) ;

int
FUNC_4 (
 const regex_t *__restrict VAR_6,
 const char *__restrict VAR_7,
 size_t VAR_8,
 regmatch_t VAR_9[],
 int VAR_10)
{
  reg_errcode_t VAR_11;
  int VAR_12, VAR_13;

  if (VAR_10 & ~(VAR_2 | VAR_3 | VAR_4))
    return VAR_0;

  if (VAR_10 & VAR_4)
    {
      VAR_12 = VAR_9[0].rm_so;
      VAR_13 = VAR_9[0].rm_eo;
    }
  else
    {
      VAR_12 = 0;
      VAR_13 = FUNC_3 (VAR_7);
    }

  FUNC_0 (VAR_5->lock);
  if (VAR_6->no_sub)
    VAR_11 = FUNC_2 (VAR_6, VAR_7, VAR_13, VAR_12, VAR_13 - VAR_12,
         VAR_13, 0, ((void*)0), VAR_10);
  else
    VAR_11 = FUNC_2 (VAR_6, VAR_7, VAR_13, VAR_12, VAR_13 - VAR_12,
         VAR_13, VAR_8, VAR_9, VAR_10);
  FUNC_1 (VAR_5->lock);
  return VAR_11 != VAR_1;
}

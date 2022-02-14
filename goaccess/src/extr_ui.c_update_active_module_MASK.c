
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int attr; TYPE_1__* pair; } ;
struct TYPE_4__ {int idx; } ;
typedef int GModule ;
typedef TYPE_2__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int,char*,char*) ;
 scalar_t__ FUNC_6 (int *,int ,char*,char const*) ;
 int FUNC_7 (char*,char*,char const*) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (scalar_t__) ;

void
FUNC_14 (WINDOW * VAR_3, GModule VAR_4)
{
  GColors *VAR_5 = FUNC_2 (VAR_0);
  const char *VAR_6 = FUNC_4 (VAR_4);
  int VAR_7 = FUNC_3 (VAR_2);

  char *VAR_8 = FUNC_13 (FUNC_6 (((void*)0), 0, VAR_1, VAR_6) + 1);
  FUNC_7 (VAR_8, VAR_1, VAR_6);

  FUNC_11 (VAR_3, 0, 30);

  FUNC_10 (VAR_3, VAR_5->attr | FUNC_0 (VAR_5->pair->idx));
  FUNC_5 (VAR_3, 0, VAR_7 - FUNC_8 (VAR_8) - 1, "%s", VAR_8);
  FUNC_9 (VAR_3, VAR_5->attr | FUNC_0 (VAR_5->pair->idx));

  FUNC_12 (VAR_3);

  FUNC_1 (VAR_8);
}

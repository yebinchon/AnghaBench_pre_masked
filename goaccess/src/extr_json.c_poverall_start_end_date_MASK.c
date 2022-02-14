
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idx; } ;
typedef int GJSON ;
typedef TYPE_1__ GHolder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char**,char**,char*) ;
 int FUNC_2 (int *,int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3 (GJSON * VAR_2, GHolder * VAR_3, int VAR_4)
{
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

  if (VAR_3->idx == 0 || FUNC_1 (VAR_3, &VAR_5, &VAR_6, "%d/%b/%Y"))
    return;

  FUNC_2 (VAR_2, VAR_1, VAR_5, VAR_4, 0);
  FUNC_2 (VAR_2, VAR_0, VAR_6, VAR_4, 0);

  FUNC_0 (VAR_6);
  FUNC_0 (VAR_5);
}

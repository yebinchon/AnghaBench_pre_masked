
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int attr; TYPE_1__* pair; } ;
struct TYPE_4__ {int idx; } ;
typedef TYPE_2__ GColors ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,char*,char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4 (WINDOW * VAR_0, const char *VAR_1, int VAR_2, int VAR_3,
                      GColors * VAR_4)
{
  FUNC_3 (VAR_0, VAR_4->attr | FUNC_0 (VAR_4->pair->idx));
  FUNC_1 (VAR_0, VAR_2, VAR_3, "%s", VAR_1);
  FUNC_2 (VAR_0, VAR_4->attr | FUNC_0 (VAR_4->pair->idx));
}

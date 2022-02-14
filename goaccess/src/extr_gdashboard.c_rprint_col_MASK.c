
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
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,char const*,int,char const*) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6 (WINDOW * VAR_2, int VAR_3, int *VAR_4, int VAR_5, const char *VAR_6,
            const char *VAR_7)
{
  GColors *VAR_8 = FUNC_1 (VAR_0);

  FUNC_5 (VAR_2, VAR_8->attr | FUNC_0 (VAR_8->pair->idx));
  FUNC_2 (VAR_2, VAR_3, *VAR_4, VAR_6, VAR_5, VAR_7);
  FUNC_3 (VAR_2, VAR_3 + 1, *VAR_4, VAR_5);
  FUNC_4 (VAR_2, VAR_8->attr | FUNC_0 (VAR_8->pair->idx));

  *VAR_4 += VAR_5 + VAR_1;
}

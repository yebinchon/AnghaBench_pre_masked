
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int module; } ;
struct TYPE_5__ {scalar_t__ protocol; scalar_t__ method; } ;
typedef TYPE_1__ GOutput ;
typedef TYPE_2__ GHTML ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void
FUNC_10 (FILE * VAR_0, const GHTML * VAR_1, int VAR_2)
{
  const GOutput *VAR_3 = FUNC_0 (VAR_1->module);

  FUNC_5 (VAR_0, VAR_2);
  FUNC_9 (VAR_0, VAR_2);
  FUNC_2 (VAR_0, VAR_2);
  FUNC_1 (VAR_0, VAR_2);
  FUNC_3 (VAR_0, VAR_2);
  FUNC_6 (VAR_0, VAR_2);

  if (VAR_3->method)
    FUNC_7 (VAR_0, VAR_2);
  if (VAR_3->protocol)
    FUNC_8 (VAR_0, VAR_2);

  FUNC_4 (VAR_0, VAR_1->module, VAR_2);
}

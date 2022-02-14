
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int end_proc; } ;
typedef TYPE_1__ WSClient ;
struct TYPE_7__ {scalar_t__ accesslog; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,char const*,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int
FUNC_4 (WSClient * VAR_1, const char *VAR_2)
{

  FUNC_1 (&VAR_1->end_proc, ((void*)0));
  if (VAR_0.accesslog)
    FUNC_0 (VAR_1, 400);

  return FUNC_3 (VAR_1, VAR_2, FUNC_2 (VAR_2));
}

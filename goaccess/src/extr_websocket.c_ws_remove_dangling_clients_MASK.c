
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ssl; scalar_t__ sockqueue; scalar_t__ headers; } ;
typedef TYPE_1__ WSClient ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_0, void *VAR_1)
{
  WSClient *VAR_2 = VAR_0;
  (void) (VAR_1);

  if (VAR_2 == ((void*)0))
    return 1;

  if (VAR_2->headers)
    FUNC_0 (VAR_2->headers);
  if (VAR_2->sockqueue)
    FUNC_1 (VAR_2);





  return 0;
}

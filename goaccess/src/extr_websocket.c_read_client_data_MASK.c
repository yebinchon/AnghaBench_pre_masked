
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WSServer ;
struct TYPE_7__ {TYPE_1__* headers; } ;
typedef TYPE_2__ WSClient ;
struct TYPE_6__ {scalar_t__ reading; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_2 (WSClient * VAR_0, WSServer * VAR_1)
{
  int VAR_2 = 0;


  if ((!(VAR_0->headers) || (VAR_0->headers->reading)))
    VAR_2 = FUNC_0 (VAR_0, VAR_1);

  else
    VAR_2 = FUNC_1 (VAR_0, VAR_1);

  return VAR_2;
}

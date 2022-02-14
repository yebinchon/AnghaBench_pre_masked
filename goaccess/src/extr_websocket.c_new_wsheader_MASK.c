
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reading; int buf; } ;
typedef TYPE_1__ WSHeaders ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* FUNC_1 (int,int) ;

__attribute__((used)) static WSHeaders *
FUNC_2 (void)
{
  WSHeaders *VAR_0 = FUNC_1 (1, sizeof (WSHeaders));
  FUNC_0 (VAR_0->buf, 0, sizeof (VAR_0->buf));
  VAR_0->reading = 1;

  return VAR_0;
}

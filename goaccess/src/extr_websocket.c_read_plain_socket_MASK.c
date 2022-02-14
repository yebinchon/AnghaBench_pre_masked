
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int listener; } ;
typedef TYPE_1__ WSClient ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_2 (WSClient * VAR_6, char *VAR_7, int VAR_8)
{
  int VAR_9 = 0;

  VAR_9 = FUNC_0 (VAR_6->listener, VAR_7, VAR_8, 0);

  if (VAR_9 == -1 && (VAR_5 == VAR_0 || VAR_5 == VAR_1))
    return FUNC_1 (VAR_6, VAR_4, VAR_9);
  else if (VAR_9 == -1 || VAR_9 == 0)
    return FUNC_1 (VAR_6, VAR_3 | VAR_2, VAR_9);

  return VAR_9;
}

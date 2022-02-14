
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int qlen; int queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_8__ {TYPE_1__* sockqueue; } ;
typedef TYPE_2__ WSClient ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_4 (WSClient * VAR_6)
{
  WSQueue *VAR_7 = VAR_6->sockqueue;
  int VAR_8 = 0;

  VAR_8 = FUNC_1 (VAR_6, VAR_7->queued, VAR_7->qlen);
  if (VAR_8 == -1 && VAR_5 == VAR_1)
    return FUNC_3 (VAR_6, VAR_4 | VAR_3, VAR_8);

  if (VAR_8 == -1 && (VAR_5 == VAR_0 || VAR_5 == VAR_2))
    return VAR_8;

  if (FUNC_0 (VAR_7->queued, VAR_8, VAR_7->qlen) == 0)
    FUNC_2 (VAR_6);
  else
    VAR_7->qlen -= VAR_8;

  return VAR_8;
}

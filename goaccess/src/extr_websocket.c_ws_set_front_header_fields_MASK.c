
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* buf; int res; int masking; int opcode; int fin; } ;
typedef TYPE_1__ WSFrame ;
struct TYPE_6__ {TYPE_1__* frame; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_7 (WSClient * VAR_2)
{
  WSFrame **VAR_3 = &VAR_2->frame;
  char *VAR_4 = (*VAR_3)->buf;

  (*VAR_3)->fin = FUNC_0 (*(VAR_4));
  (*VAR_3)->masking = FUNC_1 (*(VAR_4 + 1));
  (*VAR_3)->opcode = FUNC_2 (*(VAR_4));
  (*VAR_3)->res = FUNC_3 (*(VAR_4)) || FUNC_4 (*(VAR_4)) || FUNC_5 (*(VAR_4));


  if (!(*VAR_3)->masking || (*VAR_3)->res)
    return FUNC_6 (VAR_2, VAR_1 | VAR_0, 1);

  return 0;
}

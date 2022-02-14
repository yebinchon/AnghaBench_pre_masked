
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ devices_status; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char,int ) ;
 int VAR_3 ;
 size_t FUNC_2 (int ) ;

void FUNC_3 (hashcat_ctx_t *VAR_4)
{
  const status_ctx_t *VAR_5 = VAR_4->status_ctx;

  size_t VAR_6 = 0;

  if (VAR_5->devices_status == VAR_2)
  {
    VAR_6 = FUNC_2 (VAR_1);
  }
  else
  {
    VAR_6 = FUNC_2 (VAR_0);
  }

  FUNC_1 ('\r', VAR_3);

  for (size_t VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  {
    FUNC_1 (' ', VAR_3);
  }

  FUNC_1 ('\r', VAR_3);

  FUNC_0 (VAR_3);
}

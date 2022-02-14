
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


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;

void FUNC_2 (hashcat_ctx_t *VAR_4)
{
  const status_ctx_t *VAR_5 = VAR_4->status_ctx;

  if (VAR_5->devices_status == VAR_2)
  {
    FUNC_1 (VAR_3, "%s", VAR_1);
  }
  else
  {
    FUNC_1 (VAR_3, "%s", VAR_0);
  }

  FUNC_0 (VAR_3);
}

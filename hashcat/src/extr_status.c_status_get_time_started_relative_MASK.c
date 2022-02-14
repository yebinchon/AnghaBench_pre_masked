
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ const time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {scalar_t__ const runtime_start; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,char*,int ) ;
 struct tm* FUNC_1 (scalar_t__ const*,struct tm*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__ const*) ;

char *FUNC_4 (const hashcat_ctx_t *VAR_1)
{
  const status_ctx_t *VAR_2 = VAR_1->status_ctx;

  time_t VAR_3;

  FUNC_3 (&VAR_3);

  const time_t VAR_4 = VAR_2->runtime_start;

  time_t VAR_5 = VAR_3 - VAR_4;

  struct tm *VAR_6;
  struct tm VAR_7;

  VAR_6 = FUNC_1 (&VAR_5, &VAR_7);

  char *VAR_8 = (char *) FUNC_2 (VAR_0);

  FUNC_0 (VAR_6, VAR_8, VAR_0);

  return VAR_8;
}

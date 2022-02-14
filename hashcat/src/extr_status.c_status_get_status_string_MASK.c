
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int devices_status; int checkpoint_shutdown; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 char const* VAR_14 ;

const char *FUNC_0 (const hashcat_ctx_t *VAR_15)
{
  const status_ctx_t *VAR_16 = VAR_15->status_ctx;

  const int VAR_17 = VAR_16->devices_status;



  if (VAR_17 == 129)
  {
    if (VAR_16->checkpoint_shutdown == 1)
    {
      return VAR_12;
    }
  }

  switch (VAR_17)
  {
    case 132: return VAR_0;
    case 137: return VAR_1;
    case 128: return VAR_2;
    case 129: return VAR_3;
    case 131: return VAR_4;
    case 133: return VAR_5;
    case 135: return VAR_6;
    case 140: return VAR_7;
    case 130: return VAR_8;
    case 136: return VAR_9;
    case 139: return VAR_10;
    case 138: return VAR_11;
    case 134: return VAR_13;
  }

  return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_5__ {int kernel_power_final; } ;
typedef TYPE_2__ backend_ctx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1 (hashcat_ctx_t *VAR_1, const u64 VAR_2)
{
  FUNC_0 (VAR_0);

  backend_ctx_t *VAR_3 = VAR_1->backend_ctx;

  VAR_3->kernel_power_final = VAR_2;

  return 0;
}

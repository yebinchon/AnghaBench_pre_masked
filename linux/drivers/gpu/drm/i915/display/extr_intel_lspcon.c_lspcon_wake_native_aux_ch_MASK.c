
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_lspcon {int dummy; } ;
struct TYPE_2__ {int aux; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ,int*) ;
 TYPE_1__* FUNC_2 (struct intel_lspcon*) ;

__attribute__((used)) static bool FUNC_3(struct intel_lspcon *VAR_1)
{
 u8 VAR_2;

 if (FUNC_1(&FUNC_2(VAR_1)->aux, VAR_0,
         &VAR_2) != 1) {
  FUNC_0("Native AUX CH down\n");
  return 0;
 }

 FUNC_0("Native AUX CH up, DPCD version: %d.%d\n",
        VAR_2 >> 4, VAR_2 & 0xf);

 return 1;
}

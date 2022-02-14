
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int freq_info ;
typedef int device_t ;
struct TYPE_3__ {int id32; scalar_t__ vendor_id; size_t tablen; int * freqtab; } ;
typedef TYPE_1__ cpu_info ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,size_t) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint64_t VAR_4, freq_info **VAR_5, size_t *VAR_6)
{
 cpu_info *VAR_7;
 uint32_t VAR_8;


 VAR_8 = VAR_4 >> 32;
 for (VAR_7 = VAR_1; VAR_7->id32 != 0; VAR_7++) {
  if (VAR_7->vendor_id == VAR_2 && VAR_7->id32 == VAR_8)
   break;
 }
 if (VAR_7->id32 == 0)
  return (VAR_0);


 if (FUNC_1(VAR_7->freqtab, VAR_7->tablen) == ((void*)0)) {
  FUNC_0(VAR_3, "current setting not found in table\n");
  return (VAR_0);
 }

 *VAR_5 = VAR_7->freqtab;
 *VAR_6 = VAR_7->tablen;
 return (0);
}

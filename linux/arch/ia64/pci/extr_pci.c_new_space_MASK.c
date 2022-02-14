
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ mmio_base; int sparse; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static unsigned int FUNC_2(u64 VAR_3, int VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 if (VAR_3 == 0)
  return 0;

 VAR_5 = (u64) FUNC_0(VAR_3, 0);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  if (VAR_1[VAR_6].mmio_base == VAR_5 &&
      VAR_1[VAR_6].sparse == VAR_4)
   return VAR_6;

 if (VAR_2 == VAR_0) {
  FUNC_1("PCI: Too many IO port spaces "
   "(MAX_IO_SPACES=%lu)\n", VAR_0);
  return ~0;
 }

 VAR_6 = VAR_2++;
 VAR_1[VAR_6].mmio_base = VAR_5;
 VAR_1[VAR_6].sparse = VAR_4;

 return VAR_6;
}

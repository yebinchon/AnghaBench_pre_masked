
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint16_t ;
typedef int u_int ;
struct TYPE_3__ {int SpaceId; int BitWidth; int Address; int BitOffset; } ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(ACPI_GENERIC_ADDRESS *VAR_0)
{
 switch(VAR_0->SpaceId) {
 case 131:
  if (VAR_0->BitWidth <= 32)
   FUNC_0("0x%08x:%u[%u] (Memory)",
       (u_int)VAR_0->Address, VAR_0->BitOffset,
       VAR_0->BitWidth);
  else
   FUNC_0("0x%016jx:%u[%u] (Memory)",
       (uintmax_t)VAR_0->Address, VAR_0->BitOffset,
       VAR_0->BitWidth);
  break;
 case 132:
  FUNC_0("0x%02x:%u[%u] (IO)", (u_int)VAR_0->Address,
      VAR_0->BitOffset, VAR_0->BitWidth);
  break;
 case 130:
  FUNC_0("%x:%x+0x%x (PCI)", (uint16_t)(VAR_0->Address >> 32),
         (uint16_t)((VAR_0->Address >> 16) & 0xffff),
         (uint16_t)VAR_0->Address);
  break;

 case 134:
  FUNC_0("0x%x:%u[%u] (EC)", (uint16_t)VAR_0->Address,
         VAR_0->BitOffset, VAR_0->BitWidth);
  break;
 case 128:
  FUNC_0("0x%x:%u[%u] (SMBus)", (uint16_t)VAR_0->Address,
         VAR_0->BitOffset, VAR_0->BitWidth);
  break;
 case 136:
 case 129:
 case 135:
 case 133:
 default:
  FUNC_0("0x%016jx (?)", (uintmax_t)VAR_0->Address);
  break;
 }
}
